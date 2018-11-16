/*
 * IList.h
 *
 *  Created on: Sept. 06, 2018
 *  Author: Christian E. Portugal-Zambrano
 */

#ifndef ILIST_H_
#define ILIST_H_

//Interface -> methods 
template <class T>
class IList{ //abstract class -> pure virtual
	public:
		IList(){
			
		}
		virtual void insert(T _node)=0; // pure virtual
		virtual int Size() = 0;
		virtual ~IList(){	
		}		
};
#endif /* ILIST_H_ */
