/*
 * SNODE.h
 *
 *  Created on: 13/10/2014
 *  Author: Christian E. Portugal-Zambrano
 */

#ifndef SNODE_H_
#define SNODE_H_

#include "AbstractNode.h"
#include <iostream>

template <class T>
class SNode : public AbstractNode<T>{
private:
	
public:
	SNode(T _data){
		this->setData(_data);
		this->setNext(NULL);
		printf("Constructor \n");
	}
	
	~SNode(){
		printf("Destructor \n");
	}
	
	SNode(const SNode& _node){ //const hace que no puedo modificar los datos por referencia
		this->data = _node.data;
		//_node.data = 10000 //este archivo viola el encapsulamiento pero con const no deja
		this->next = _node.next;	
	}
	
};

#endif /* SNODE_H_ */

