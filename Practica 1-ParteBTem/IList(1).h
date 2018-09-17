/*
 * IList.h
 *
 *  Created on: Sept. 06, 2018
 *  Author: Christian E. Portugal-Zambrano
 */

#ifndef ILIST_H_
#define ILIST_H_

#include "CNode.h"

template <class T>
class IList{ //abstract class -> pure virtual
	public:
		virtual	void insert(CNode<T>* _node) = 0;
		virtual ~CLinkedStructures() = 0;		
};
#endif /* ILIST_H_ */
