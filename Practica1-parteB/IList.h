#ifndef ILIST_H_
#define ILIST_H_
#include "CNode.h"
template < class T>
class IList {
	public :
	virtual void insert (CNode<T>* _node) = 0 ;
	virtual ~IList() = 0;

	//virtual ~CLinkedStructures() = 0 ;
	//virtual void insert(T _data) = 0;
	//virtual T at(int _pos) = 0;
	//virtual void clear() = 0;
	//virtual void remove(int _pos) = 0;
	//virtual void erase(T _data) = 0;
	//virtual void reverse() = 0;

};
#endif
