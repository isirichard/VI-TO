/*
 * DNODE.h
 *
 *  Created on: 13/10/2014
 *  Author: Christian E. Portugal-Zambrano
 */

#ifndef DNODE_H_
#define DNODE_H_

#include "AbstractNode.h"
#include <iostream>

template <class T>
class DNode : public AbstractNode<T>{
private:
	DNode<T>* prev;
	
public:
	
	DNode(T _data):AbstractNode<T>(_data){
		prev = NULL;
		printf("Constructor \n");
	}
	
	DNode(const DNode& _node){ //const hace que no puedo modificar los datos por referencia
		this->data = _node.data;
		//_node.data = 10000 //este archivo viola el encapsulamiento pero con const no deja
		prev = _node.prev;
		this->next = _node.next;	
	}
		
	~DNode(){
		printf("Destructor \n");
	}

	void setPrev(DNode<T>* _prev){
		this->prev = _prev;
	}

	DNode<T>* getPrev(){
		return prev;
	}
	

	

	

};

#endif /* DNODE_H_ */

