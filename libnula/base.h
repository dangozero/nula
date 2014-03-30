
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#ifndef _NULA_ALGOBASE_H
#define _NULA_ALGOBASE_H

#include <new.h>

namespace nula {
template <class T>
inline void swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <class InputIterator, class Distance>
inline void distance(InputIterator first, InputIterator last, Distance& n) {
    while (first != last) { ++first; ++n; }
}

template <class T>
inline void destruct(T* pointer) {
    pointer->~T();
}

template <class T1, class T2>
inline void construct(T1* p, const T2& value) {
	::new (p) T1(value);
}

template <class ForwardIterator>
inline void destruct(ForwardIterator first, ForwardIterator last) {
    while (first != last) {
	destroy(&*first);
	++first;
    }
}

template <class InputIterator, class ForwardIterator>
ForwardIterator uninitialized_copy(InputIterator first, InputIterator last,
				   ForwardIterator result) {
    while (first != last) construct(&*result++, *first++);
    return result;
}

template <class ForwardIterator, class T>
void uninitialized_fill(ForwardIterator first, ForwardIterator last, 
			const T& x) {
    while (first != last) construct(&*first++, x);
}

template <class ForwardIterator, class Size, class T>
ForwardIterator uninitialized_fill_n(ForwardIterator first, Size n,
				     const T& x) {
    while (n--) construct(&*first++, x);
    return first;
}

template <class InputIterator, class OutputIterator>
inline OutputIterator copy(InputIterator first, InputIterator last, OutputIterator result)
{
  while (first != last) *result++ = *first++;
  return result;
}

template <class BidirectionalIterator1, class BidirectionalIterator2>
BidirectionalIterator2 copy_backward(BidirectionalIterator1 first, 
				     BidirectionalIterator1 last, 
				     BidirectionalIterator2 result) {
    while (first != last) *--result = *--last;
    return result;
}

template <class ForwardIterator, class T>
void fill(ForwardIterator first, ForwardIterator last, const T& value) {
    while (first != last) *first++ = value;
}

template <class T>
class allocator {
public:
    typedef T value_type;
    typedef T* pointer;
    typedef const T* const_pointer;
    typedef T& reference;
    typedef const T& const_reference;
    typedef size_t size_type;
    typedef ptrdiff_t difference_type;

    static pointer allocate(size_type n) { 
		T* tmp = (T*)(zalloc((size_t)(n * sizeof(T))));
		return tmp;
    }

    static void deallocate(pointer p) { free(p); }
};

template<class T, class alloc>
class simple_alloc {
public:
    static T *allocate( size_t n)
                { return 0 == n? 0 : (T*) alloc::allocate( n * sizeof (T)); }
	static void *alloc_space( size_t n)
                { return 0 == n? 0 : zalloc(n); }

    static T *allocate()
                { return (T*) alloc::allocate( sizeof (T)); }
    static void deallocate(T *p, size_t n)
                { if (0 != n) alloc::deallocate( p ); }
    static void deallocate(T *p)
                { alloc::deallocate( p ); }
};


};

#endif

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */