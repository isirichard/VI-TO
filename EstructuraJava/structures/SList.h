/*
 * List.h
 *
 *  Created on: oct. 11, 2014
 *      Author: christian
 */

#ifndef SLIST_H_
#define SLIST_H_

#include "AbstractList.h"
#include "SNode.h"
#include <iostream>

//concrete class
template <class T>
class SList : public AbstractList<T>{
private:
	
public:
	SList(); // constructor
	SList(const SList& _list);
	~SList(); // destructor
	void insert(T _data); //insert an element
private:

};

template <class T>
SList<T>::SList(const SList& _list){	
	// copy the entire list
	
}

template <class T>
SList<T>::SList() {
	// TODO Auto-generated constructor stub	
	this->proot=0;
}

template <class T>
SList<T>::~SList() {	
	// TODO Auto-generated destructor stub
	
}


template <class T>
void SList<T>::insert(T _data){
	SNode<T>* _node = new SNode<T>(_data);
	this->size++;
}

#endif /* SLIST_H_ */
