/*
 * IPilCol.h
 *
 *  Created on: Oct. 02, 2018
 *  Author: Paulo 
 */

#ifndef IPILCOL_H_
#define IPILCOL_H_

#include <iostream>
#include "AbstractNode.h"

//Interface -> methods 
template <class T>
class IPilCol{ //abstract class -> pure virtual
	public:
		IPilCol(){
			printf("Parent constructor \n");
		}
		virtual ~IPilCol(){
			printf("Parent destructor \n");
		}
		
	virtual void insert(AbstractNode<T>* nuevo)=0; //insert an element 				
	virtual T quitar()=0; 	  	
	virtual bool isEmpty()=0; //true if is empty
	virtual unsigned int size()=0; //size of the list	
	virtual T frente()=0;   					
	virtual T final()=0; 
			
};
#endif /* IPILCOL_H_ */

