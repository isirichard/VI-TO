#ifndef AList_H_
#define AList_H_

#include "SNode.h"
#include <iostream>
#include "AbstractArrayList.h"

//concrete class
template <class T>
class AList : public AbstractArrayList<T>{
private:

public:
	AList(); // constructor
	AList(const AList& _list);
	~AList(); // destructor
	void insert(T _data); //insert an element
private:

};

template <class T>
AList<T>::AList(const AList& _list){
	// copy the entire list

}

template <class T>
AList<T>::AList() {
	// TODO Auto-generated constructor stub
	this->proot=0;
}

template <class T>
AList<T>::~AList() {
	// TODO Auto-generated destructor stub

}


template <class T>
void AList<T>::insert(T _data){
	this->proot = new SNode<T>(_data);
	//SNode<T>* _node = new SNode<T>(_data);
	this->size++;
}

#endif /* AList_H_ */



