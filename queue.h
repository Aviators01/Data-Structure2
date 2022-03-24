#ifndef queue_h
#define queue_h

#include "collection.h"

template<class type> class queue:public collection<type>{
public:
	void add(type val);
	void remove();
	type curr();
};
#endif