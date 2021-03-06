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
class DoubleList : public IList<T> {

public:
	DoubleList(); // constructor
	~DoubleList(); // destructor
	void insert(T _data); //insert an element

private:
	CNode<T>* proot;
	int Size;

};

template<class T>
DoubleList<T>::DoubleList() {
	proot = NULL;
	Size = 0;
	cout<<"llamando al constructor";
}

template<class T>
DoubleList<T>::~DoubleList() {
	cout<<"llamando al destructor";
}

template<class T>
void DoubleList<T>::insert(T _data) {
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

