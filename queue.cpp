#include "queue.h"

template <class type> void queue<type>::add(type val){
	collection<type>::coll.push_front(val);
}

template <class type> void queue<type>::remove(){
	collection<type>::coll.pop_back();
}

template <class type> type queue<type>::curr(){
	return collection<type>::coll.back();
}