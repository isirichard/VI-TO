
#ifndef AbstractArrayList_h_
#define AbstractArrayList_h_

#include "IList.h"
//Abstract class

template <class T>
class AbstractArrayList : public IList<T>{
	protected:
		AbstractNode<T>* proot;
		int size;

	public:
		AbstractArrayList(){
			proot = 0;
			size = 0;
		}
		virtual ~AbstractArrayList(){
		}
		virtual void insert(T _node) = 0; // pure virtual

		int Size(){
		  return size;
		}
		virtual void display();
};

#endif
