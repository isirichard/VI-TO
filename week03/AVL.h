#ifndef AVL_H_
#define AVL_H_

#include "SNode.h"
#include <iostream>
#include "AbstractTree.h"

//concrete class
template <class T>
class AVL : public AbstractTree<T>{
private:

public:
	AVL(); // constructor
	AVL(const AVL& _list);
	~AVL(); // destructor
	void insert(T _data); //insert an element
private:

};

template <class T>
AVL<T>::AVL(const AVL& _list){
	// copy the entire list

}

template <class T>
AVL<T>::AVL() {
	// TODO Auto-generated constructor stub
	this->proot=0;
}

template <class T>
AVL<T>::~AVL() {
	// TODO Auto-generated destructor stub

}


template <class T>
void AVL<T>::insert(T _data){
	this->proot = new SNode<T>(_data);
	//SNode<T>* _node = new SNode<T>(_data);
	this->size++;
}

#endif /* AVL_H_ */
