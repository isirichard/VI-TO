/*
 * IList.h
 *
 *  Created on: Sept. 06, 2018
 *  Author: Christian E. Portugal-Zambrano
 */

#ifndef ILIST_H_
#define ILIST_H
#include <iostream>

//Interface -> methods 
template <class T>
class IList{ //abstract class -> pure virtual
	public:
		IList(){
			std::cout<<"Calling IList constructor"<< std::endl;
			
		}
		virtual void insert(T _node)=0; // pure virtual
		virtual int Size() = 0;
		virtual void show() = 0;
		virtual ~IList(){
			std::cout<<"Calling IList destructor" << std::endl;
		}
		//virtual void display()=0;
};
#endif /* ILIST_H_ */
