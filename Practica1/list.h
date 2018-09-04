#ifndef List_H_
#define List_H_

#include "node.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
template<class T>
class List {

public:
	List(); // constructor
	~List(); // destructor
	void insert(T _data); //insert an element
	void erase(T _data); 	//erase and element if exist
	void clear(); 	//clear all the list
	void remove(int _pos); //remove element at _pos
	void reverse(); //reverse the entire list
	T at(int _pos); //get element at _pos
	bool isEmpty(); //true if is empty
	bool save(std::string); // save to a file
	bool load(std::string); // load from file
	unsigned int size(); //size of the list
	void show(); //show the list to console
	T operator[](int); //overload []
	void operator<<(T); // overload <<
private:
	Node<T>* proot;
	int Size;

};

template<class T>
List<T>::List() {
	proot = NULL;
	Size = 0;

}

template<class T>
List<T>::~List() {
}

template<class T>
void List<T>::insert(T _data) {
	try {

		if (Size == 0) {
			proot = new Node<T>(_data);
			Size++;
			return;

		}
		if (proot == NULL)
			return;

		//caso general
		Node<T>* aux = proot;
		int i = 0;
		while (i < Size - 1 && aux->getNext() != NULL) {
			i++;
			aux = aux->getNext();

		}
		if (i == Size - 1) {
			aux->setNext(new Node<T>(_data));
			//cout<< "inserte 2"<< endl;
			Size++;

		}
	} catch (std::bad_alloc&) {
		cout << "no inserte" << endl;
	}

}

template<class T>
void List<T>::erase(T _data) {
	if (proot == NULL)
		return;
	if (proot->getData() == _data) {
		proot = proot->getNext();
		Size--;
		return;
	}
	//caso general
	Node<T>* aux;
	for (aux = proot; aux->getNext() != NULL; aux = aux->getNext()) {
		if (aux->getNext()->getData() == _data)
			break;
	}
	if (aux->getNext() != NULL) {
		aux->setNext(aux->getNext()->getNext());
		Size--;
	}
}

template<class T>
T List<T>::at(int _pos) {
	T dato = -1;
	int i = 1;
	for (Node<T>* aux = proot; aux != NULL; aux = aux->getNext()) {
		if (i == _pos) {
			return aux->getData();
		}
		i++;
	}
	return dato;
}

template<class T>
bool List<T>::isEmpty() {
	return 0 == Size;
}

template<class T>
unsigned int List<T>::size() {
	return Size;
}

template<class T>
void List<T>::show() {

	Node<T>* aux = proot;
	while (aux != NULL) {
		printf("%i\n", aux->getData());
		aux = aux->getNext();

		//cout<< "dentro"<< endl;
	}

}

template<class T>
void List<T>::clear() {
	proot = NULL;
	Size = 0;
}

template<class T>
void List<T>::remove(int _pos) {
	if (proot == NULL)
		return;
	if (_pos == 1) {
		proot = proot->getNext();
		Size--;
		return;
	}
	//caso general
	int i = 1;
	Node<T>* aux;
	for (aux = proot; aux->getNext() != NULL; aux = aux->getNext()) {
		if (++i == _pos)
			break;
		i++;
	}
	if (i == _pos) {
		aux->setNext(aux->getNext()->getNext());
		Size--;
	}
}

template<class T>
T List<T>::operator [](int _pos) {
	T dato = 0;
	return dato;
}

template<class T>
void List<T>::operator <<(T _dato) {

}

template<class T>
bool List<T>::save(std::string filepath) {
	ofstream archivo;
	//archivo.open("prueba.txt",ios::out); //abriendo
	archivo.open(filepath, ios::out);
	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	Node<T>* aux = proot;
	while (aux != NULL) {
		archivo << aux->getData()<<endl;
		aux = aux->getNext();
	}

	archivo.close();
	return true;
}

template<class T>
bool List<T>::load(std::string filepath) {
	ifstream archivo;
	string texto;
	archivo.open(filepath,ios::in);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	//List<string> listAux;
	while(!archivo.eof()){//mientras no sea el final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
		//listAux.insert(texto);
	}
	archivo.close();
	//listAux.show();
	return true;
}

template<class T>
void List<T>::reverse() {
	Node<T>* sig = proot;
	Node<T>* ant = NULL;
	while (proot != NULL) {
		sig = sig->getNext();
		proot->setNext(ant);
		ant = proot;
		proot = sig;
	}
	proot = ant;
}

#endif /* List_H_ */

