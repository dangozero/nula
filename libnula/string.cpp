#include "nula.h"


namespace nula {


String::String(const nula::string &s)
{
	char *buf = strndup(s.c_str(),s.length());
	if( !buf )
	{
		// TODO: no memory exception here
	}
	
	set_buffer(buf);
	set_length(s.length());
}

String::String(int i)
{
	char buf2[11];
	int len = sprintf(buf2, "%d", i);

	char *buf = strndup(buf2, len);
	if( !buf )
	{
		// TODO: no memory exception here
	}
	
	set_buffer(buf);
	set_length(len);
}

String::String(double f)
{
	char buf2[32];
	int len = sprintf(buf2, "%f", f);

	char *buf = strndup(buf2, len);
	if( !buf )
	{
		// TODO: no memory exception here
	}
	
	set_buffer(buf);
	set_length(len);
}

String::String()
{
	char *buf = strndup("", 1);
	if( !buf )
	{
		// TODO: no memory exception here
	}
	
	set_buffer(buf);
	set_length(0);
}

String::String(nula::String *s)
{
	char *buf = strndup((const char *)s->get_buffer(), s->get_length());
	if( !buf )
	{
		// TODO: no memory exception here
	}
	
	set_buffer(buf);
	set_length(s->get_length());
}


String::~String()
{
	free(get_buffer());
}

};
