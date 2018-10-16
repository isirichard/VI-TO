
#ifndef ICola_H_
#define ICola_H_

#include "IPilCol.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

template <class T>
class ICola : public IPilCol<T>{
public:
	ICola(); // constructor  								
	~ICola(); // destructor 								
	void insert(AbstractNode<T>* nuevo); //insert an element 				
	T quitar(); 	  	
	bool isEmpty(); //true if is empty
	unsigned int size(); //size of the list	
	T frente();   					
	T final(); 
									

private:
	AbstractNode<T>* front;
	AbstractNode<T>* end;
	int Size;
};


template <class T>
ICola<T>::ICola() {
	// TODO Auto-generated constructor stub
	this -> front = NULL;
	this -> end = NULL;
	this -> Size = 0;
	cout << "Constructor " <<endl;
	
}

template <class T>
ICola<T>::~ICola() {
	// TODO Auto-generated destructor stub
	cout <<"Destructor " << endl;
}


template <class T>
void ICola<T>::insert(AbstractNode<T>* nuevo){
	//NodeL<T>* nuevo = new NodeL<T>(_data);
	if (isEmpty()) {
		front = nuevo;
	}
	else {
		end ->setNext(nuevo);
	}
	end = nuevo;
	this -> Size++;	
}

template <class T>
T ICola<T>::quitar(){
	if (isEmpty()){
		cout << "La Cola esta vacia " << endl;
		return 0;
	}
	else {
		T aux = front -> getData();
		AbstractNode<T>* a = front;
		front = front -> getNext();
		delete a;
		this ->Size--;
		return aux;
	}
}

template <class T>
T ICola<T>::frente(){
	if (isEmpty()){
		cout << "La Cola esta Vacia" << endl;
		return 0;
	}
	else {
		return front -> getData();
	}
}

template <class T>
T ICola<T>::final(){
	if (isEmpty()){
		cout << "La Cola esta Vacia" << endl;
		return 0;
	}
	else {
		return end -> getData();
	}
}

template <class T>
bool ICola<T>::isEmpty(){
	if (this -> Size <= 0){
		return true;
	}
	return false;
}

template <class T>
unsigned int ICola<T>::size(){
	return Size;
}


#endif 

