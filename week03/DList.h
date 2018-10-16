#ifndef DList_H_
#define DList_H_

#include "DNode.h"
#include <iostream>
#include "AbstractLinkedList.h"

//concrete class
template <class T>
class DList : public AbstractLinkedList<T>{
private:

public:
	DList(); // constructor
	DList(const DList& _list);
	~DList(); // destructor
	void insert(T _data); //insert an element
	void show();
private:

};

template <class T>
DList<T>::DList(const DList& _list){
	// copy the entire list

}

template <class T>
DList<T>::DList() {
	// TODO Auto-generated constructor stub
	std::cout<<"Calling DList constructor"<< std::endl;

	this->proot=0;
}

template <class T>
DList<T>::~DList() {
	// TODO Auto-generated destructor stub
	std::cout<<"Calling DList destructor"<< std::endl;
}


template <class T>
void DList<T>::insert(T _data){
	//this->proot = new SNode<T>(_data);
	//SNode<T>* _node = new SNode<T>(_data);
	//this->size++;

	std::cout << "calling insert DList  for DList" << std::endl;
		try {

			if (this->size == 0) {
				this->proot = new DNode<T>(_data);
				this->size++;
				return;

			}
			if (this->proot == NULL)
				return;

			//caso general
			DNode<T>* aux = (DNode<T>*)(this->proot);
			int i = 0;
			while (i < this->size - 1 && aux->getNext() != NULL) {
				i++;
				aux = aux->getNext();

			}
			if (i == this->size - 1) {
				aux->setNext(new DNode<T>(_data));
				aux->getNext()->setPrev(aux); //:::::::::::::::::::poner el anterior
				//cout<< "inserte 2"<< endl;
				this->size++;

			}
		} catch (std::bad_alloc&) {
			std::cout << "no inserte" << std::endl;
		}
}
template<class T>
void DList<T>::show() {
	AbstractNode<T>* temp = this->proot;
	while (temp != 0) {
		std::cout << temp->getData();
		temp = temp->getNext();
		if (temp != 0)
			std::cout << "--";
	}
	std::cout << std::endl;
}
#endif /* DList_H_ */
