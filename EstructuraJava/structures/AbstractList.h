
#ifndef ABSTRACTLIST_H_
#define ABSTRACTLIST_H_

#include "IList.h"
#include "AbstractNode.h"
//Abstract class

template <class T>
class AbstractList : public IList<T>{
	protected:
		AbstractNode<T>* proot;
		int size;

	public:
		AbstractList(){
			proot = 0;			
			size = 0;
		}
		virtual ~AbstractList(){			
		}
		virtual void insert(T _node) = 0; // pure virtual

		int Size(){
		  return size;
		}
};

#endif