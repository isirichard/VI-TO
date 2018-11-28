#ifndef SLIST_H_
#define SLIST_H_

#include "SNode.h"
#include <iostream>
#include "AbstractLinkedList.h"

//concrete class
template <class T>
class SList : public AbstractLinkedList<T>{
private:
	
public:
	SList(); // constructor
	SList(const SList& _list);
	~SList(); // destructor
	void insert(T _data); //insert an element
	void show();
private:

};

template <class T>
SList<T>::SList(const SList& _list){	
	// copy the entire list
	
}

template <class T>
SList<T>::SList() {
	std::cout<<"Calling SList constructor"<< std::endl;
	this->proot=0;
}

template <class T>
SList<T>::~SList() {	
	std::cout<<"Calling SList destructor"<< std::endl;
	
}


template <class T>
void SList<T>::insert(T _data){
	//this->proot = new SNode<T>(_data);
	//SNode<T>* _node = new SNode<T>(_data);
	//this->size++;

	std::cout << "calling insert for SList" << std::endl;
		try {

			if (this->size == 0) {
				this->proot = new SNode<T>(_data);
				this->size++;
				return;

			}
			if (this->proot == NULL)
				return;

			//caso general
			AbstractNode<T>* aux = this->proot;
			int i = 0;
			while (i < this->size - 1 && aux->getNext() != NULL) {
				i++;
				aux = aux->getNext();

			}
			if (i == this->size - 1) {
				aux->setNext(new SNode<T>(_data));
				//cout<< "inserte 2"<< endl;
				this->size++;

			}
		} catch (std::bad_alloc&) {
			std::cout << "no inserte" << std::endl;
		}
}
template<class T>
void SList<T>::show() {
	//this->proot = new SNode<int>(0);
	AbstractNode<T>* temp = this->proot;
	while (temp != 0) {
		std::cout << temp->getData();
		temp = temp->getNext();
		if (temp != 0)
			std::cout << "--";
	}
	std::cout << std::endl;
}
#endif /* SLIST_H_ */
