/*
 * List.h
 *
 *  Created on: oct. 11, 2014
 *      Author: christian
 */

#ifndef List_H_
#define List_H_

#include "AbstractList.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


//concrete class
template <class T>
class List : public AbstractList<T>{
private:
	
public:
	List(); // constructor
	List(const List& _list);
	~List(); // destructor
	void insert(CNode<T>* _data); //insert an element
	// T at(int _pos); //get element at _pos
	
	// void erase(T _data); 	//erase and element if exist
	// void clear(); 	//clear all the list
	// void remove(int _pos); //remove element at _pos
	// void reverse(); //reverse the entire list
	
	// bool isEmpty(); //true if is empty
	// bool save(std::string); // save to a file
	// bool load(std::string); // load from file
	 //unsigned int Size(); //size of the list
	// void show(); //show the list to console
	// T operator [] (int); //overload []
	// List<T>& operator << (T); // overload <<
private:

};

template <class T>
List<T>::List(const List& _list){
	std::cout<< "Calling the copy constructor for list" << std::endl;
	// copy the entire list
	
}

template <class T>
List<T>::List() {
	// TODO Auto-generated constructor stub
	std::cout << "Calling default constructor for list" <<std::endl;
	this->proot=0;
}

template <class T>
List<T>::~List() {
	std::cout<< "Calling the destructor for list" << std::endl;
	// TODO Auto-generated destructor stub
	
}


template <class T>
void List<T>::insert(CNode<T>* _data){
	std::cout<< "calling insert for List"<< std::endl;
}

// template <class T>
// void List<T>::erase(T _data){
// 	CNode<T>* _iter= proot;
// 	CNode<T>* _preiter =proot;
// 	while(_iter!=0){
// 		if(_iter->getData() == _data){
// 			if(_iter == proot){
// 				proot = proot->getNext();
// 				delete _iter;
// 				_iter= proot;
// 				_preiter=_iter;
// 			}
// 			else{
// 				_preiter->getNext() = _iter->getNext();
// 				delete _iter;
// 				_iter=_preiter->getNext();
// 			}
// 		}
// 		else{
// 			_preiter=_iter;
// 			_iter= _iter->getNext();
// 		}
// 	}
// }

// template <class T>
// T List<T>::at(int _pos){
// 	CNode<T>* temp= proot;
// 	T dato=0;
// 	if(_pos>=0 && _pos<size()){
// 		while(_pos--)	temp=temp->getNext();
// 		dato=temp->getData();
// 	}
// 	return dato;
// }

// template <class T>
// bool List<T>::isEmpty(){
// 	return (proot!=0)?false:true;
// }

// template <class T>
// unsigned int List<T>::size(){
// 	return Size;
// }

// template <class T>
// void List<T>::show(){
// 	CNode<T>* temp= proot;
// 	while(temp!=0){
// 		std::cout<<temp->getData();
// 		temp =temp->getNext();
// 		if(temp!=0) std::cout<<"--";
// 	}
// 	std::cout<<std::endl;
// }

// template <class T>
// void List<T>::clear(){
// 	CNode<T>* temp;
// 	while(proot!=0){
// 		temp = proot;
// 		proot= proot->getNext();
// 		delete temp;
// 	}
// 	Size=0;
// }

// template <class T>
// void List<T>::remove(int _pos){
// 	CNode<T>* _temp= proot;
// 	CNode<T>* _pretemp=proot;
// 	if(_pos>=0 && _pos<size()){
// 		while(_pos--) {
// 			_pretemp=_temp;
// 			_temp=_temp->getNext();
// 		}
// 		if(_temp==proot)	proot= proot->getNext();
// 		_pretemp->getNext()=_temp->getNext();
// 		delete _temp;
// 		Size--;
// 	}
// }

// template <class T>
// T List<T>::operator [](int _pos){
// 	return this->at(_pos);
// }

// template <class T>
// List<T>& List<T>::operator <<(T _dato){
// 	this->insert(_dato);
// 	return *this;	
// }

// template <class T>
// bool List<T>::save(std::string filepath){
// 	std::ofstream file(filepath.c_str());
// 	file<<Size<<std::endl;
// 	CNode<T>* temp = proot;
// 	while(temp!=0){
// 		file<<temp->getData()<<"\t";
// 		temp=temp->getNext();
// 	}
// 	file.close();
// 	return true;
// }

// template <class T>
// bool List<T>::load(std::string filepath){
// 	bool r=true;
// 	std::ifstream file(filepath.c_str());
// 	if(file.is_open()){
// 		int cont=0;
// 		int size=0;
// 		std::string line;
// 		while(file.good()){
// 			getline(file,line);
// 			std::stringstream token(line);
// 			if(cont==0){
// 				token>>size;
// 			}
// 			else{
// 				for(int i=0;i<size;i++){
// 					T dato;
// 					token>>dato;
// 					insert(dato);
// 				}
// 			}
// 			cont++;
// 		}
// 	}
// 	else{
// 		std::cout<<"Archivo no abierto!"<<std::endl;
// 		r= false;
// 	}
// 	file.close();
// 	return r;
// }

// template <class T>
// void List<T>::reverse(){
// 	CNode<T>* _temp = proot;
// 	CNode<T>* _pretemp= proot;
// 	CNode<T>* _postemp= proot->getNext();
// 	while(_temp->getNext()!=0){
// 		_temp->getNext()=_pretemp;
// 		_pretemp=_temp;
// 		if(_pretemp==proot) _pretemp->getNext()=0;
// 		_temp=_postemp;
// 		_postemp=_postemp->getNext();
// 	}
// 	_temp->getNext()=_pretemp;
// 	proot=_temp;
// }

#endif /* List_H_ */
