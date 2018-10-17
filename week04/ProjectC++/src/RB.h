#ifndef RB_H_
#define RB_H_

#include "SNode.h"
#include <iostream>
#include "AbstractTree.h"

//concrete class
template <class T>
class RB : public AbstractTree<T>{
private:

public:
	RB(); // constructor
	RB(const RB& _list);
	~RB(); // destructor
	void insert(T _data); //insert an element
private:

};

template <class T>
RB<T>::RB(const RB& _list){
	// copy the entire list

}

template <class T>
RB<T>::RB() {
	// TODO Auto-generated constructor stub
	this->proot=0;
}

template <class T>
RB<T>::~RB() {
	// TODO Auto-generated destructor stub

}


template <class T>
void RB<T>::insert(T _data){
	this->proot = new SNode<T>(_data);
	//SNode<T>* _node = new SNode<T>(_data);
	this->size++;
}

#endif /* RB_H_ */
