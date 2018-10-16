#ifndef SNODE_H_
#define SNODE_H_

#include "AbstractNode.h"

template<class T>
class SNode: public AbstractNode<T> {
private:

public:
	SNode(T _data) : AbstractNode<T>(_data) {
	}
	SNode(T _data, SNode<T>* next) : AbstractNode<T>(_data) {
		this->next = (AbstractNode<T>*)next;
	}
	~SNode() {
	}
/*
	T getData() {
		return this->data;
	}

	void setData(T _data) {
		this->data = _data;
	}

	SNode<T>* getNext() {
		return this->next;
	}

	void setNext(SNode<T>* _next) {
		this->next = _next;
	}
*/

};

#endif /* SNODE_H_ */
