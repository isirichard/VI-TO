#ifndef SimpleList_H_
#define SimpleList_H_

#include "CNode.h"
#include "IList.h" //error de una hora
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
template<class T>
class SimpleList : public IList<T> {

public:
	SimpleList(); // constructor
	~SimpleList(); // destructor
	void  insert(T _data); //insert an element

private:
	CNode<T>* proot;
	int Size;

};

template<class T>
SimpleList<T>::SimpleList() {
	proot = NULL;
	Size = 0;
	cout<<"llamando al constructor"<<endl;
}

template<class T>
SimpleList<T>::~SimpleList() {
	cout<<"llamando al destructor"<<endl;
}

template<class T>
void SimpleList<T>::insert(T _data)  {
	try {

		if (Size == 0) {
			proot = new CNode<T>(_data);
			Size++;
			return;

		}
		if (proot == NULL)
			return;

		//caso general
		CNode<T>* aux = proot;
		int i = 0;
		while (i < Size - 1 && aux->getNext() != NULL) {
			i++;
			aux = aux->getNext();

		}
		if (i == Size - 1) {
			aux->setNext(new CNode<T>(_data));
			//cout<< "inserte 2"<< endl;
			Size++;

		}
	} catch (std::bad_alloc&) {
		cout << "no inserte" << endl;
	}

}


#endif /* SimpleList_H_ */

