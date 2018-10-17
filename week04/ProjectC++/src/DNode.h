#ifndef DNode_H_
#define DNode_H_

#include "AbstractNode.h"

template<class T>
class DNode: public AbstractNode<T> {
private:
	DNode<T>* prev;
public:

	DNode(T _data) : AbstractNode<T>(_data) {
		prev = NULL;
	}
	~DNode() {
	}


	T getData() {
		return this->data;
	}

	void setData(T _data) {
		this->data = _data;
	}

	DNode<T>* getNext() {
		return (DNode<T>*)this->next;
	}


	void setNext(DNode<T>* _next) {
		this->next = _next;
	}

	DNode<T>* getPrev() {
		return prev;
	}

	void setPrev(DNode<T>* _prev) {
		prev = _prev;
	}
};

#endif /* DNode_H_ */
