#ifndef Stack_H_
#define Stack_H_

#include <iostream>
#include "AbstractQueSta.h"
#include "SNode.h"

//concrete class
template <class T>
class Stack : public AbstractQueSta<T>{

public:
	Stack(); // constructor
	Stack(const Stack& _list);
	~Stack(); // destructor
	void insert(T _data); //insert an element
	void show();
private:

};

template <class T>
Stack<T>::Stack(const Stack& _list){
	// copy the entire list

}

template <class T>
Stack<T>::Stack() {
	// TODO Auto-generated constructor stub
	std::cout<<"Calling Stack constructor"<< std::endl;
	this->proot=0;
}

template <class T>
Stack<T>::~Stack() {
	// TODO Auto-generated destructor stub
	std::cout<<"Calling Stack destructor"<< std::endl;
}


template <class T>
void Stack<T>::insert(T _data){
	std::cout << "calling insert for Stack" << std::endl;
	//this->proot = new SNodo<T>(_data,(SNode<T>*)this->proot);
	//Agregarrrrrrrrrrrrrrrrr

	///this->proot = new SNode<T>(_data);
	//SNode<T>* _node = new SNode<T>(_data);
	this->size++;
}

template<class T>
void Stack<T>::show() {


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

#endif /* Stack_H_ */
