/*
 * IList.h
 *
 *  Created on: Sept. 06, 2018
 *  Author: Christian E. Portugal-Zambrano
 */

#ifndef ILIST_H_
#define ILIST_H_

#include "CNode.h"
#include <iostream>

//Interface -> methods 
template <class T>
class IList{ //abstract class -> pure virtual
	public:
		IList(){
			std::cout<<"Calling IList constructor"<< std::endl;
		}
		virtual void insert(CNode<T>* _node)=0; // pure virtual
		virtual int Size() = 0;
		virtual ~IList(){
			std::cout<<"Calling IList destructor" << std::endl;
		}		
};
#endif /* ILIST_H_ */
