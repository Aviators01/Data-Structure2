#ifndef stack_h
#define stack_h

#include "collection.h"

template<class type> class stack:public collection<type>{
public:
	void add(type val);
	void remove();
	type curr();
};
#endif