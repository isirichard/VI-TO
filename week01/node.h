/*
 * Node.h
 *	Created on:  13/10/2014
 *  Modified on: 28/08/2018
 *  Author: Christian E. Portugal-Zambrano
 */

#ifndef NODE_H_
#define NODE_H_
#include <iostream>

template <class T>
class Node{
private:
	T data;
	Node<T>* next;
	
public:
	Node(T _data):data(_data),next(NULL){}
	~Node(){}
	
	T getData(){
		return data;
	}
	
	Node<T>* getNext(){
		return next;
	}

	void setNext(Node<T>* _next){
		next = _next;
	}
};

#endif /* NODE_H_ */
