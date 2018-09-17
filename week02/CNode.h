/*
 * CNODE.h
 *
 *  Created on: 13/10/2014
 *  Author: Christian E. Portugal-Zambrano
 */

#ifndef CNODE_H_
#define CNODE_H_
#include <iostream>

template <class T>
class CNode{
private:
	T data;
	CNode<T>* next;
	
public:
	CNode(T _data):data(_data),next(NULL){}
	~CNode(){}
	
	T getData(){
		return data;
	}

	void setData(T _data){
		data = _data;
	}
	
	CNode<T>* getNext(){
		return next;
	}

	void setNext(CNode<T>* _next){
		next = _next;
	}
};



#endif /* CNODE_H_ */
