#ifndef _NULA_LIST_H
#define _NULA_LIST_H


#include "heap.h"
#include "base.h"

namespace nula {

using namespace std;

template<typename T>
class NULA_API List: public Zone {
public:
	struct Element {
		Element *next;
		Element *prev;
		T data; /* Needs to always be last in the struct */
	};

	typedef struct List::Element *iterator;
	typedef const struct List::Element *const_iterator;
public:
	List()
		: tail(0),
		head(0),
		count_(0)
	{
	}

	~List()
	{
		clean();
	}

	
	always_inline iterator begin() {
		return head;
	}

	always_inline iterator end() {
		return tail;
	}
	
	void append(T element)
	{
		Element *tmp = new Element;

		tmp->prev = this->tail;
		tmp->next = NULL;
		if (this->tail) {
			this->tail->next = tmp;
		} else {
			this->head = tmp;
		}
		this->tail = tmp;
		tmp->data = element;

		++this->count_;
	}

	void prepend(T element)
	{
		Element *tmp = new Element;

		tmp->next = this->head;
		tmp->prev = NULL;
		if (this->head) {
			this->head->prev = tmp;
		} else {
			this->tail = tmp;
		}
		this->head = tmp;
		tmp->data = element;

		++this->count_;
	}

	void remove(T element, int (*compare)(T element1, T element2))
	{
		Element *current=this->head;
		Element *next;

		while (current) {
			next = current->next;
			if (compare(current->data, element)) {
				if ((current)->prev) {
					(current)->prev->next = (current)->next;
				} else {
					(l)->head = (current)->next;
				}
				if ((current)->next) {
					(current)->next->prev = (current)->prev;
				} else {
					(l)->tail = (current)->prev;
				}
				destruct(current->data);
				delete current;
				--this->count_;
				break;
			}
			current = next;
		}
	}

	void destroy()
	{
		Element *current=this->head, *next;
	
		while (current) {
			next = current->next;
			destruct(current->data);

			delete current;
			current = next;
		}

		this->count_ = 0;
	}

	void clean()
	{
		destroy();
		head = tail = NULL;
	}

	T remove_tail()
	{
		Element *old_tail;
		T data;

		if ((old_tail = this->tail)) {
			if (old_tail->prev) {
				old_tail->prev->next = NULL;
			} else {
				this->head = NULL;
			}
	        
			data = old_tail->data;

			this->tail = old_tail->prev;

			destruct(old_tail->data):
			delete old_tail;

			--this->count_;

			return data;
		}
		return T();
	}

	void copy(List<T> *src)
	{
		Element *ptr;
		count_ = src->count_;
		head = tail = NULL;

		ptr = src->head;
		while (ptr) {
			append(ptr->data);
			ptr = ptr->next;
		}
	}

	void merge(List<T> *src)
	{
		Element *ptr;
		count_ = count_ + src->count_;
		head = tail = NULL;

		ptr = src->head;
		while (ptr) {
			append(ptr->data);
			ptr = ptr->next;
		}
	}

	int count() const {return count_; }

private:
	Element *head;
	Element *tail;
	size_t count_;
};

};



#endif