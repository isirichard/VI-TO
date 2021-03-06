/*
 * List.h
 *
 *  Created on: oct. 11, 2014
 *      Author: christian
 */

#ifndef List_H_
#define List_H_

#include "node.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

template <class T>
class List{
public:
	List(); // constructor
	~List(); // destructor
	void insert(T _data); //insert an element
	void erase(T _data); 	//erase and element if exist
	void clear(); 	//clear all the list
	void remove(int _pos); //remove element at _pos
	void reverse(); //reverse the entire list
	T at(int _pos); //get element at _pos
	bool isEmpty(); //true if is empty
	bool save(std::string); // save to a file
	bool load(std::string); // load from file
	unsigned int size(); //size of the list
	void show(); //show the list to console
	T operator[](int); //overload []
	void operator<<(T); // overload <<
private:
	Node<T>* proot;
	int Size;
};


template <class T>
List<T>::List() {
	// TODO Auto-generated constructor stub
	
}

template <class T>
List<T>::~List() {
	// TODO Auto-generated destructor stub
	
}


template <class T>
void List<T>::insert(T _data){
	
}

template <class T>
void List<T>::erase(T _data){
	
}

template <class T>
T List<T>::at(int _pos){
	T dato=0;
	
	return dato;
}

template <class T>
bool List<T>::isEmpty(){
	return false;
}

template <class T>
unsigned int List<T>::size(){
	return Size;
}

template <class T>
void List<T>::show(){
	
}

template <class T>
void List<T>::clear(){
	
}

template <class T>
void List<T>::remove(int _pos){
	
}

template <class T>
T List<T>::operator [](int _pos){
	T dato =0;
	return dato;
}

template <class T>
void List<T>::operator <<(T _dato){
	
}

template <class T>
bool List<T>::save(std::string filepath){
	
	return true;
}

template <class T>
bool List<T>::load(std::string filepath){
	
	return true;
}

template <class T>
void List<T>::reverse(){
	
}

#endif /* List_H_ */
