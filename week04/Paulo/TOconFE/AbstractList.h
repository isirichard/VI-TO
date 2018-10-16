#ifndef AbstractList_H_
#define AbstractList_H_
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include "AbstractNode.h"
#include "IList.h"

//Abstract class
template <class T>
class AbstractList : public IList<T>{
	protected:
		AbstractNode<T>* proot;
		int size;
	
	public:
		AbstractList(){	
			printf("Constructor \n");
			proot=NULL;		
			size = 0;
		}
		virtual ~AbstractList(){
			printf("Destructor \n");			
		}
		
		virtual void insert(AbstractNode<T>* node)=0; //insert an element (LISTO)
		virtual void erase(AbstractNode<T>* node)=0; 	//erase and element if exist (LISTO)
		virtual void clear()=0; 	//clear all the list (LISTO)
		virtual void remove(int _pos)=0; //remove element at _pos (LISTO)
		virtual void reverse()=0; //reverse the entire list (LISTO-falta entenderlo)
		virtual T at(int _pos)=0; //get element at _pos (LISTO)
		virtual bool isEmpty()=0; //true if is empty (LISTO)
		 bool save(std::string); // save to a file (LISTO)
		 bool load(std::string); // load from file (LISTO-falta entenderlo)
		virtual int Size()=0; //size of the list  (LISTO) 
		virtual void show()=0; //show the list to console (LISTO)
		virtual T operator[](int)=0; //overload [] (LISTO) (IGUAL AL AT)
		virtual void operator<<(T)=0; // overload << (LISTO) (IGUAL AL INSERT)
};

template <class T>
bool AbstractList<T>::save(std::string filepath){
	ofstream out(filepath.c_str());
	out<<"Tamaño >> "<< this->size<<endl;
	AbstractNode<T>* aux = this->proot;
	
	while(aux!=0){
		out<<aux->getData()<<"\t";
		aux=aux->getNext();
	}
	
	out.close();
	return true;
}

template <class T>
bool AbstractList<T>::load(std::string filepath){
	bool r=true;
	ifstream in(filepath.c_str());
	
	if(in.is_open()){
		int cont=0;
		int size=0;
		string line;
		
		while(in.good()){
			getline(in,line);
			stringstream token(line);
			if(cont==0){
				token>>size;
			}
			else{
				for(int i=0;i<size;i++){
					T dato;
					token>>dato;
					//insert(dato);
				}
			}
			cont++;
		}
	}
	else{
		cout<<"Archivo no abierto!"<<endl;
		r= false;
	}
	in.close();
	return r;
}


#endif /* AbstractList_H_ */
