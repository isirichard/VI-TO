
#ifndef BST_h_
#define BST_h_

#include "AbstractTree.h"
//Abstract class

template <class T>
class BST : public AbstractTree<T>{
	protected:
		AbstractNode<T>* proot;
		int size;

	public:
		BST(){
			proot = 0;
			size = 0;
		}
		virtual ~BST(){
		}
		virtual void insert(T _node) = 0; // pure virtual

		int Size(){
		  return size;
		}
		virtual void display();
};

#endif
