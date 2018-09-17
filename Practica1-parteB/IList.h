#ifndef ILIST_H_
#define ILIST_H_
#include "CNode.h"
#include <iostream>

template < class T>
class IList {
	public :
	IList(){
		std::cout<<"Calling IList Constructor"<<std::endl;
	}
	virtual void insert (T _data) = 0;
	//virtual int Size() = 0;
	virtual ~IList(){
		std::cout<<"Calling IList Destructor"<<std::endl;
	};

	//virtual ~CLinkedStructures() = 0 ;
	//virtual void insert(T _data) = 0;
	//virtual T at(int _pos) = 0;
	//virtual void clear() = 0;
	//virtual void remove(int _pos) = 0;
	//virtual void erase(T _data) = 0;
	//virtual void reverse() = 0;

};
#endif
