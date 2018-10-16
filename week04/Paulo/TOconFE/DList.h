/*
 * DList.h
 *
 *  Created on: oct. 11, 2014
 *      Author: christian
 */

#ifndef DList_H_
#define DList_H_

#include "AbstractList.h"
#include "AbstractNode.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;
//concrete class
template <class T>
class DList : public AbstractList<T>{
private:
	
public:
	DList(); // constructor
	DList(const DList& _list);
	~DList(); // destructor
	void insert(AbstractNode<T>* node); //insert an element (LISTO)
	void erase(AbstractNode<T>* node); 	//erase and element if exist (LISTO)
	void clear(); 	//clear all the list (LISTO)
	void remove(int _pos); //remove element at _pos (LISTO)
	void reverse(); //reverse the entire list (LISTO-falta entenderlo)
	T at(int _pos); //get element at _pos (LISTO)
	bool isEmpty(); //true if is empty (LISTO)
	bool save(std::string); // save to a file (LISTO)
	bool load(std::string); // load from file (LISTO-falta entenderlo)
	int Size(); //size of the list  (LISTO) 
	void show(); //show the list to console (LISTO)
	T operator[](int); //overload [] (LISTO) (IGUAL AL AT)
	void operator<<(T); // overload << (LISTO) (IGUAL AL INSERT)
private:

};

template <class T>
DList<T>::DList(const DList& _list){	
	// copy the entire list
	cout<<"Constructor "<<endl;
	this->size = _list.Size;
	this->proot = _list.proot;
}

template <class T>
DList<T>::DList() {
	// TODO Auto-generated constructor stub	
	cout<<"Constructor "<<endl;
	this->proot=NULL;
	this->size=0;
}

template <class T>
DList<T>::~DList() {	
	// TODO Auto-generated destructor stub
	cout<<"Destructor "<<endl;
	if ( !isEmpty() ) // La lista no est� vac�a
    {    
      AbstractNode<T>* auxNode;

      while ( this->proot != 0 ) // Eliminar los nodos existentes
      {  
         auxNode = this->proot;
         this->proot = this->proot->getNext();
         delete auxNode;
      }
    }
}


template <class T>
void DList<T>::insert(AbstractNode<T>* node){
		
		if(isEmpty()){
			this->proot=node;
			this->size++;
		}else{
			
			AbstractNode<T>* aux;
			aux=this->proot;
			
			while(aux->getNext()!=NULL){
				
				aux=aux->getNext();
			}
			aux->setNext(node);
			this->size++;
			
		}
}

template <class T>
void DList<T>::erase(AbstractNode<T>* node){
	AbstractNode<T>* aux= this->proot;
	AbstractNode<T>* aux2 = this->proot;
	
	while(aux!=NULL){
		if(aux->getData() == node->getData()){
			if(aux == this->proot){
				this->proot = this->proot->getNext();
				delete aux;
				this->size--;
				aux= this->proot;
				aux2=aux;
			}else{
				aux2->setNext(aux->getNext());
				delete aux;
				this->size--;
				aux=aux2->getNext();
			}
		}else{
			aux2=aux;
			aux= aux->getNext();
		}
	}
}


template <class T>
T DList<T>::at(int _pos){
	T dato=0;
	AbstractNode<T>* aux;
	aux=this->proot;
	
	if(_pos>=0 && _pos<Size()){
		while(_pos!=0){
			aux=aux->getNext();
			_pos--;
		}	
		dato=aux->getData();
	}	
	return dato;
}

template <class T>
bool DList<T>::isEmpty(){
	if(this->proot == NULL) 
		return true;
	else
		return false;
}

template <class T>
int DList<T>::Size(){
	/*
	Node<T>* aux;
	aux=proot;
	
	while(aux!=NULL){
		
		aux = aux->getNext();
		Size++;
	}
	*/
	return this->size;
}

template <class T>
void DList<T>::show(){
		if(isEmpty()){
			cout<<"Es vacia"<<endl;
		}else{
			AbstractNode<T>* aux;
			aux=this->proot;
			
			while(aux!=NULL){
				cout<<aux->getData()<<"->";
				aux=aux->getNext();
			}
			cout<<endl;
		}
}

template <class T>
void DList<T>::clear(){
	AbstractNode<T>* aux;
	while(this->proot!=NULL){
		aux = this->proot;
		this->proot = this->proot->getNext();
		delete aux;
	}
	this->size=0;
}

template <class T>
void DList<T>::remove(int _pos){
	AbstractNode<T>* aux= this->proot;
	AbstractNode<T>* aux2= this->proot;
	
	if(_pos>=0 && _pos<Size()){
		
		while(_pos!=0){
			aux2=aux;
			aux=aux->getNext();
			_pos--;
		}	
		
		if(aux==this->proot){
			this->proot= this->proot->getNext();	
		}	
		
		aux2->setNext(aux->getNext());
		delete aux;
		this->size--;
	}
}

template <class T>
T DList<T>::operator [](int _pos){
	T dato = at(_pos);
	return dato;
}

template <class T>
void DList<T>::operator <<(T _dato){
	//insert(_dato);
}

template <class T>
bool DList<T>::save(std::string filepath){
	ofstream out(filepath.c_str());
	out<<"Tama�o >> "<< this->size<<endl;
	AbstractNode<T>* aux = this->proot;
	
	while(aux!=0){
		out<<aux->getData()<<"\t";
		aux=aux->getNext();
	}
	
	out.close();
	return true;
}

template <class T>
bool DList<T>::load(std::string filepath){
	bool r=true;
	ifstream in(filepath.c_str());
	
	if(in.is_open()){
		int cont=0;
		int size=0;
		string line;
		
		while(in.good()){
			getline(in,line);
			stringstream token(line);
			if(cont==0){
				token>>size;
			}
			else{
				for(int i=0;i<size;i++){
					T dato;
					token>>dato;
					//insert(new AbstractNode<T>);
				}
			}
			cont++;
		}
	}
	else{
		cout<<"Archivo no abierto!"<<endl;
		r= false;
	}
	in.close();
	return r;
}

template <class T>
void DList<T>::reverse(){
	AbstractNode<T>* aux1 = this->proot;
	AbstractNode<T>* auxpre= this->proot;
	AbstractNode<T>* auxpost= this->proot->getNext();
	
	while(aux1->getNext()!=NULL){
		aux1->setNext(auxpre);
		auxpre=aux1;
		if(auxpre==this->proot) {
			auxpre->setNext(NULL);
		}
		aux1=auxpost;
		auxpost=auxpost->getNext();
	}
	aux1->setNext(auxpre);
	this->proot=aux1;
}

#endif /* CList_H_ */

