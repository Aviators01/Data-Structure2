#ifndef COLLECTION_H
#define COLLECTION_H

#include <list>

template <class e> class collection{
protected:
	std::list <e> coll;
public:
	virtual bool empty(){return coll.empty();}
	virtual void add(e val) =0;
	virtual void remove() =0;
	virtual e curr() =0;
};
#endif