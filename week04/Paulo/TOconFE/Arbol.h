
#ifndef Arbol_Bi_
#define Arbol_Bi_

#include "ANode.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

template <class T>
class Arbol{
public:
	Arbol(); // constructor
	Arbol(ANode<T>* r);  								
	~Arbol(); // destructor
	bool esVacio();
	void insert(ANode<T>* r);
	T hijoIzq();
	T hijoDer();
	T Araiz();
	void verArbol(ANode<T>* r, int n);
	
private:
	ANode<T>* raiz;
};


template <class T>
Arbol<T>::Arbol() {
	// TODO Auto-generated constructor stub
	this -> raiz = NULL;
	cout << "Constructor  " <<endl;
}

template <class T>
Arbol<T>::Arbol(ANode<T>* r) {
	// TODO Auto-generated constructor stub
	this -> raiz = r; 
	cout << "Constructor  " <<endl;
	
}
template <class T>
Arbol<T>::~Arbol() {
	// TODO Auto-generated destructor stub
	cout <<"Destructor " << endl;
}

template <class T>
bool Arbol<T>::esVacio(){
	if(this->raiz == NULL) 
		return true;
	else
		return false;
}

template <class T>
void Arbol<T>::insert(ANode<T>* r){
	if(this->raiz==NULL){
        raiz = r;
    }else if(r->getData() < raiz->getData()){
		insert(raiz->izq);
	}else if(r->getData() > raiz->getData()){
	 	insert(raiz->der);
  	}
}


template <class T>
T Arbol<T>::hijoIzq(){
	if (raiz){
		return raiz -> getIzq() ->getData();
	}
	else{
		cout << "Vacio" << endl;
		return 0;
	}
}

template <class T>
T Arbol<T>::hijoDer(){
	if (raiz){
		return raiz -> getDer()->getData();
	}
	else{
		cout << "Vacio" << endl;
		return 0;
	}
}

template <class T>
T Arbol<T>::Araiz(){
	if (raiz){
		return raiz->getData();
	}
	else{
		cout << "Vacio" << endl;
		return 0;
	}
}

//n debe ser 0
template <class T>
void verArbol(ANode<T>* r, int n)
{
     if(r==NULL)
          return;
          
     verArbol(r->der, n+1);

     for(int i=0; i<n; i++)
         cout<<"   ";

     cout<< r->getData() <<endl;

     verArbol(r->izq, n+1);
}

#endif 

