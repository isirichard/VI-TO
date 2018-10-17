#ifndef ABSTRACTNODE_H_
#define ABSTRACTNODE_H_

#include <iostream>


template <class T>
class AbstractNode{
private:
protected:
	T data;
	AbstractNode<T>* next;
public:

	AbstractNode(T data){
		next = NULL;
		this->data = data;
	}

	virtual ~AbstractNode(){

	}

	T getData(){
		return data;
	}

	void setData(T _data){
		data = _data;
	}

	void setNext(AbstractNode<T>* next){
		this->next = next;
	}

	AbstractNode<T>* getNext(){
		return next;
	}
};

#endif
