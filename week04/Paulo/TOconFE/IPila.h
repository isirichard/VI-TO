#ifndef IPila_H_
#define IPila_H_

#include "IPilCol.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

template <class T>
class IPila : public IPilCol<T>{
public:
	IPila(); // constructor  								
	~IPila(); // destructor 								
	void insert(AbstractNode<T>* nuevo); //insert an element 				
	T quitar(); 
	bool isEmpty(); //true if is empty  					
	unsigned int size(); //size of the list					
	T frente();		
	T final(); 	

private:
	AbstractNode<T>* cima;
	int Size;
};


template <class T>
IPila<T>::IPila() {
	// TODO Auto-generated constructor stub
	cima = NULL;
	this -> Size = 0;
	cout << "Constructor "  <<endl;
	
}

template <class T>
IPila<T>::~IPila() {
	// TODO Auto-generated destructor stub
	cout <<"Destructor " << endl;
}


template <class T>
void IPila<T>::insert(AbstractNode<T>* nuevo){
	//AbstractNode<T>* nuevo = new AbstractNode<T>(_data);
	nuevo -> setNext(cima);
	cima = nuevo;
	this -> Size++;
}

template <class T>
T IPila<T>::quitar(){
	if(isEmpty()) {
		cout << "La Pila  esta Vacia" << endl;
		return 0;
	}
	else {
		T aux = cima -> getData();
		cima = cima -> getNext();
		this -> Size--;
		return aux;
		
	}
}

template <class T>
bool IPila<T>::isEmpty(){
	if (this -> Size <= 0){
		return true;
	}
	return false;
}

template <class T>
unsigned int IPila<T>::size(){
	return Size;
}

/* Muestra el valor de la cima*/
template <class T>
T IPila<T>::frente(){
	if(isEmpty()){
		cout << "La Pila  esta Vacia" << endl;
		return 0;
	}
	else {
		return cima -> getData();
	}
}

template <class T>
T IPila<T>::final(){
}

#endif 

