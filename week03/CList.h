#ifndef CList_H_
#define CList_H_

#include "DNode.h"
#include <iostream>
#include "AbstractLinkedList.h"

//concrete class
template<class T>
class CList: public AbstractLinkedList<T> {
private:
	DNode<T> * last;
public:
	CList(); // constructor
	CList(const CList& _list);
	~CList(); // destructor
	void insert(T _data); //insert an element
	void show();
private:

};

template<class T>
CList<T>::CList(const CList& _list) {
	// copy the entire list

}

template<class T>
CList<T>::CList() {
	// TODO Auto-generated constructor stub
	std::cout << "Calling CList constructor" << std::endl;
	this->proot = 0;
}

template<class T>
CList<T>::~CList() {
	// TODO Auto-generated destructor stub
	std::cout << "Calling CList destructor" << std::endl;
}

template<class T>
void CList<T>::insert(T _data) {
	std::cout << "calling insert CList  for CList" << std::endl;
	//this->proot = new SNode<T>(_data);
	//SNode<T>* _node = new SNode<T>(_data);
	//this->size++;
	try {

		if (this->size == 0) {
			this->proot = new DNode<T>(_data);
			this->size++;
			last = (DNode<T>*)this->proot;
			DNode<T> * inicio = (DNode<T>*)this->proot;
			inicio->setNext((DNode<T>*)this->proot);
			//this->proot->setNext(this->proot);//////////////// el final el inicio
			//this->proot->setPrev(this->proot);//////////////// el final el inicio
			inicio->setPrev((DNode<T>*)this->proot);//////////////// el final el inicio
			return;

		}
		if (this->proot == NULL)
			return;

		//caso general
		DNode<T>* aux = (DNode<T>*)this->proot;
		int i = 0;
		while (i < this->size - 1 && aux->getNext() != NULL) {
			i++;
			aux = aux->getNext();

		}
		if (i == this->size - 1) {
			aux->setNext(new DNode<T>(_data));
			aux->getNext()->setPrev(aux); //:::::::::::::::::::poner el anterior
			last = aux->getNext();   //:::::::::::::::::::poner el last al final

			DNode<T> * inicio2 = (DNode<T>*)this->proot;
			//this->proot->setPrev(aux->getNext()); //:::::::::::: el anterior es el final
			inicio2->setPrev(aux->getNext()); //:::::::::::: el anterior es el final
			//aux->getNext()->setNext(this->proot); //:::::::::::: el sig del final es el inicio
			aux->getNext()->setNext((DNode<T>*)this->proot); //:::::::::::: el sig del final es el inicio
			//cout<< "inserte 2"<< endl;
			this->size++;

		}
	} catch (std::bad_alloc&) {
		std::cout << "no inserte" << std::endl;
	}
}
template<class T>
void CList<T>::show() {
	DNode<T>* temp = (DNode<T>*)this->proot;
	while (temp != last) {
		std::cout << temp->getData();
		temp = temp->getNext();
		if (temp != 0)
			std::cout << "--";
	}
	std::cout << temp->getData();
	std::cout << std::endl;
}
#endif /* CList_H_ */
