
#ifndef SNODE_H_
#define SNODE_H_

#include "AbstractNode.h"

template <class T>
class SNode : public AbstractNode<T>{
private:

public:
	SNode(T _data):AbstractNode<T>(_data){}
	~SNode(){}
};

#endif /* SNODE_H_ */
