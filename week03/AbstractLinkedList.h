
#ifndef ABSTRACTLINKEDLIST_H_
#define ABSTRACTLINKEDLIST_H_

#include "IList.h"
#include "AbstractNode.h"
//Abstract class

template <class T>
class AbstractLinkedList : public IList<T>{
	protected:
		AbstractNode<T>* proot;
		int size;

	public:
		AbstractLinkedList(){
			std::cout<<"Calling AbstractLinkedList constructor"<< std::endl;
			proot = 0;			
			size = 0;
		}
		virtual ~AbstractLinkedList(){
			std::cout<<"Calling AbstractLinkedList destructor"<< std::endl;
		}
		virtual void insert(T _node) = 0; // pure virtual
		virtual void show() = 0;

		int Size(){
		  return size;
		}
		//virtual void display();
};

#endif
