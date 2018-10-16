#ifndef ANODE_H_
#define ANODE_H_
#include <iostream>

template <class T>
class ANode {


public:
	
	T data;
	ANode<T>* izq;
	ANode<T>* der;
	
	ANode(T _data): data(_data), izq(NULL), der(NULL){
		printf("Constructor \n");
	}
	
	ANode(ANode<T>* _izq, T _data, ANode<T>* _der){
		this->data = _data;
		this->izq = _izq;
		this->der = _der;
	}
	
	~ANode(){
		printf("Destructor \n");
	}
		
	T getData(){
		return data;
	}
	void setData(T _data){
		this -> data;
	}
	ANode<T>* getDer(){
		return der;
	}
	
	ANode<T>* getIzq(){
		return izq;
	}
	void setDer(ANode<T>* _der){
		der = _der;
	}
	void setIzq(ANode<T>* _izq){
		izq = _izq;
	}
};

#endif

