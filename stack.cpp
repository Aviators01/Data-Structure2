#include "stack.h"

template<class type>void stack<type>::add(type val){
	collection<type>::coll.push_front(val);
	//(*this).coll.push_front(val);
	
	/*
	Note to self: if there are three classes: base, derived, and derived of derived
	with each having a list coll, which one will (*this).coll.push_front(val); access?
	*/
}

template<class type>void stack<type>::remove(){
	collection<type>::coll.pop_front();
}

template<class type>type stack<type>::curr(){
	return collection<type>::coll.front();
}