/*
 * IList.h
 *
 *  Created on: Sept. 06, 2018
 *  Author: Christian E. Portugal-Zambrano
 */

#ifndef ILIST_H_
#define ILIST_H_

#include <iostream>
#include "AbstractNode.h"

//Interface -> methods 
template <class T>
class IList{ //abstract class -> pure virtual
	public:
		IList(){
			printf("Parent constructor \n");
		}
		virtual ~IList(){
			printf("Parent destructor \n");
		}
		
		virtual void insert(AbstractNode<T>* node)=0; //insert an element (LISTO)
		virtual void erase(AbstractNode<T>* node)=0; 	//erase and element if exist (LISTO)
		virtual void clear()=0; 	//clear all the list (LISTO)
		virtual void remove(int _pos)=0; //remove element at _pos (LISTO)
		virtual void reverse()=0; //reverse the entire list (LISTO-falta entenderlo)
		virtual T at(int _pos)=0; //get element at _pos (LISTO)
		virtual bool isEmpty()=0; //true if is empty (LISTO)
		virtual bool save(std::string)=0; // save to a file (LISTO)
		virtual bool load(std::string)=0; // load from file (LISTO-falta entenderlo)
		virtual int Size()=0; //size of the list  (LISTO) 
		virtual void show()=0; //show the list to console (LISTO)
		virtual T operator[](int)=0; //overload [] (LISTO) (IGUAL AL AT)
		virtual void operator<<(T)=0; // overload << (LISTO) (IGUAL AL INSERT)
			
};
#endif /* ILIST_H_ */

