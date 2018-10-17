#ifndef Queue_H_
#define Queue_H_

#include <iostream>
#include "AbstractQueSta.h"

//concrete class
template <class T>
class Queue : public AbstractQueSta<T>{
private:

public:
	Queue(); // constructor
	Queue(const Queue& _list);
	~Queue(); // destructor
	void insert(T _data); //insert an element
	void show();
private:

};

template <class T>
Queue<T>::Queue(const Queue& _list){
	// copy the entire list

}

template <class T>
Queue<T>::Queue() {
	// TODO Auto-generated constructor stub
	std::cout<<"Calling Queue constructor"<< std::endl;
	this->proot=0;
}

template <class T>
Queue<T>::~Queue() {
	// TODO Auto-generated destructor stub
	std::cout<<"Calling Queue destructor"<< std::endl;
}


template <class T>
void Queue<T>::insert(T _data){
	std::cout << "calling insert for Stack" << std::endl;
	this->proot = new SNode<T>(_data);
	//SNode<T>* _node = new SNode<T>(_data);
	this->size++;
}
template<class T>
void Queue<T>::show() {
	//this->proot = new SNode<int>(0);
	/*
	AbstractNode<T>* temp = this->proot;
	while (temp != 0) {
		std::cout << temp->getData();
		temp = temp->getNext();
		if (temp != 0)
			std::cout << "--";
	}
	std::cout << std::endl;
	*/
}
#endif /* Queue_H_ */
