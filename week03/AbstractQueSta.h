
#ifndef AbstractQueSta_H_
#define AbstractQueSta_H_

#include "IStackQueue.h"
//Abstract class

template <class T>
class AbstractQueSta : public IStackQueue<T>{
	protected:
		AbstractNode<T>* proot;
		int size;

	public:
		AbstractQueSta(){
			std::cout<<"Calling AbstractQueSta constructor"<< std::endl;
			proot = 0;
			size = 0;
		}
		virtual ~AbstractQueSta(){
			std::cout<<"Calling AbstractQueSta destructor"<< std::endl;
		}
		virtual void insert(T _node) = 0; // pure virtual
		virtual void show() = 0;

		int Size(){
		  return size;
		}
		//virtual void display();
};

#endif
