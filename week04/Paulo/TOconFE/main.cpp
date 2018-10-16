#include "SList.h"
#include "CList.h"
#include "DList.h"

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string>

#include "SNode.h"
#include "DNode.h"
#include "ANode.h"

#include "IPila.h"
#include "ICola.h"

#include "Arbol.h"

using namespace std;

int main(){

 	int opc=0,lim, eleccion,dato;
 	int caso = 0;
	bool eliminacion=false;
    IList<int>* list;
	//AbstractList<int>* list;
	IPilCol<int>* pilcol;
	Arbol<int>* arbol;
	
	do{
	 	cout<< "\n--------------asgag-----\n";
		cout<< "LABORATORIO 2 \n";
	 	cout<< "-------------------\n";
		cout<<	"0) ELEGIR QUE CREAR\n"
	        	"1) INSERTAR ELEMENTO\n"
	        	"2) ELIMINAR ELEMENTO\n"
	        	"3) TAMAÑO\n"
	        	"4) MOSTRAR LISTA\n"
	        	"5) LIMPIAR LISTA\n"
	        	"6) EJEMPLO PILA \n"
	        	"7) EJEMPLO COLA\n"
	        	"8) EJEMPLO ARBOL\n"
	        	"9) ELIMINAR OBJETO\n"
	        	"10) SALIR \n"
	        	"Escribe el numero de la operacion a realizar: ";
	    
	   	cin>>opc;
	   	cout<< 	"-------------------\n";
	
	   switch(opc){
	   	case 0:
	   		system("cls");
	   		cout<<"Elige que crear Lista(0) o Lista Circular(1) o Lista Doblemente(2) ||| Pila (3) , Cola (4) || Arbol(5)):";
	   		cin>>eleccion;
	   		if(eleccion==0){
	   				list = new SList<int>();
	   				caso=1;
					break;
			}else if(eleccion==1){
					list = new CList<int>();
					caso = 1;
					break;
			}else if(eleccion==2){
					list = new DList<int>();
					caso = 1;
					break;
			
			}else if(eleccion==3){
					pilcol = new IPila<int>();
					caso = 2;
					break;
			
			}else if(eleccion==4){
					pilcol = new ICola<int>();
					caso = 2;
					break;
			
			}else if(eleccion==5){
					arbol = new Arbol<int>();
					caso = 3;
					break;
			
			}else{
				cout<<"Opcion no valida";
				break;
			}
		case 1:
			system("cls");
	        cout<<"HAZ ELEGIDO INSERTAR, ingresa el dato >>";
	        cin>>dato;
	        //AbstractNode<int>* a = new SNode<int>(10);
		    list->insert(new SNode<int>(dato));
			break;
			
		case 2:
			system("cls");
	        cout<<"HAZ ELEGIDO ELIMINAR, ingresa el dato a eliminar >>";
	        cin>>dato;
	        //AbstractNode<int>* a = new SNode<int>(10);
		    list->erase(new SNode<int>(dato));
			break;
						
		case 3:
			system("cls");
	        cout<<"HAZ ELEGIDO Mostrar tamaño\n";
		    cout<<"El tamaño de la lista es >>"<<list->Size()<<endl;
			break;
			
		case 4:
			system("cls");
	        cout<<"HAZ ELEGIDO Mostrar LISTA\n";
		    list->show();
			break;
			
		case 5:
			system("cls");
	        cout<<"HAZ ELEGIDO LIMPIAR LISTA\n";
		    list->clear();
			break;
			
		case 6:
			system("cls");
	        cout<<"EJEMPLO PILA\n";
				pilcol = new IPila<int>();
				
				cout << pilcol->frente() << endl;
				
				cout << "------------------"<<endl<<"Agregar de 5 a 10" << endl;
				
				for (int i = 5 ; i <= 10 ; i++){
					pilcol->insert(new SNode<int>(i));
					cout << pilcol->frente() << endl;
				}
			
				cout << "------------------"<<endl<<"Quitar 3 elementos" << endl;
				cout << pilcol->quitar() << endl;
				cout << pilcol->quitar() << endl;
				cout << pilcol->quitar() << endl;
				
				cout << "------------------"<<endl<<"El tamaño de la pila es "<<pilcol->size()<<endl;
			
			break;
			
		case 7:
			system("cls");
	        cout<<"EJEMPLO COLA\n";
	        	pilcol = new ICola<int>();
				
				cout << pilcol->frente() << endl;
				
				cout << "------------------"<<endl<<"Agregar de 20 a 25" << endl;
				
				for (int i = 20 ; i <= 25 ; i++){
					pilcol->insert(new SNode<int>(i));
					//cout << pilcol->frente() << endl;
				}
			
				cout << "Frente de la cola >>"<<pilcol->frente() << endl;
				cout << "Final de la cola >>"<<pilcol->final() << endl;
				
				cout << "------------------"<<endl<<"Quitar 3 elementos" << endl;
				cout << pilcol->quitar() << endl;
				cout << pilcol->quitar() << endl;
				cout << pilcol->quitar() << endl;
				
				cout << "------------------"<<endl<<"El tamaño de la pila es "<<pilcol->size()<<endl;
		    
			break;
			
		case 8:
			system("cls");
	        cout<<"EJEMPLO ARBOL\n";
		    	arbol = new Arbol<int>();
		    	cout<<"Es vacio? : "<<arbol->esVacio()<<endl;
		    	cout << "------------------"<<endl<<"Insertamos 1 elementos" << endl;
		    	arbol->insert(new ANode<int>(NULL,4,NULL));
		    	
		    	cout<<"La raiz del arbol es >> "<<arbol->Araiz()<<endl;
		    	cout<<"Es vacio? : "<<arbol->esVacio()<<endl;
		    	
		    	//arbol->insert(new ANode<int>(NULL,1,NULL));
		    	//arbol->insert(new ANode<int>(NULL,6,NULL));
		    	//arbol->insert(new ANode<int>(1));
		    	
		    	//cout<<"El hijo izq es >> "<<arbol->hijoIzq()<<endl;
		    	//cout<<"El hijo der es>> "<<arbol->hijoDer()<<endl;
		    	
		    	cout<<"Es vacio? : "<<arbol->esVacio()<<endl;
		    	//arbol->verArbol(new ANode<int>(10),0);
		    	
			break;
	
		case 9:
			system("cls");
			if(caso==0){
				cout<<"Primero cree un objeto"<<endl;
			}else if(caso==1){
				delete list;
				eliminacion=true;
			}else if(caso==2){
				delete pilcol;
				eliminacion=true;
			}else if(caso==3){
				delete arbol;
				eliminacion=true;
			}
	      	break;	
	      	
		case 10:
			if(eliminacion){
				return 0;
			}else{
				if(caso==0){
					cout<<"Primero cree un objeto"<<endl;
				}else if(caso==1){
					delete list;
					eliminacion=true;
				}else if(caso==2){
					delete pilcol;
					eliminacion=true;
				}else if(caso==3){
					delete arbol;
					eliminacion=true;
				}
				return 0;
			}
			
	   
	    default:
	    	cout<<"OPCION NO VALIDA!!";
	        getch();
	        break;
	        
	      }
	  } while (opc!=10);
	 
	  getch();
	  
	system("pause");

	
	
	/*
	IList<int>* list = new List<int>(); // polymorphism
	//AbstractList<int>* AList = new List<int>(); // which one should I call?
	//list->insert(new CNode<int>(19));
	cout<<list->isEmpty()<<endl;
	
	list->insert(new SNode(19));
	list->insert(100);
	list->insert(200);
	cout<<"Tamaño de la lista >> "<<list->Size()<<endl;
	list->show();
	
	List<int>* abcd = new List<int>(abc);
	abcd->insert(1000);
	cout<<abcd->size()<<endl;
	abcd->show();
	delete abcd;
	
	list->erase(10);
	cout<<"Tamaño de la lista >> "<<list->Size()<<endl;
	list->show();
	cout<<"Elemento posicion 1 >> "<<list->at(0)<<endl;
	list->remove(0);
	list->show();
	cout<<"Tamaño de la lista >> "<<list->Size()<<endl;
	list->remove(0);
	cout<<"Tamaño de la lista >> "<<list->Size()<<endl;
	
	list->insert(1);
	list->insert(2);
	list->insert(3);
	list->show();
	list->reverse();
	list->show();
	
	//cout<<"Elemento pos 1 >> "<<list[1]<<endl;
	//list<<100;
	list->show();
	
	list->save("Prueba.txt");
	//Carga el archivo, si existe retorna 1
	cout<<"Existe el archivo? (1-si 0-no)"<<endl;
	cout<<list->load("Prueba.txt")<<endl;
	
	//abc.clear();
	//abc.show();
	
	delete list;
	cout<<"/////////////"<<endl;
	IList<double>* list2 = new CList<double>(); // polymorphism
	//list2->insert(12.5);
	//cout<<"Tamaño de la lista >> "<<list2->Size()<<endl;
	//list2->show();
	delete list2;
	
	cout<<"/////////////"<<endl;
	IList<char>* list3 = new DList<char>(); // polymorphism
	delete list3;
	
	cout<<"/////////////"<<endl;
	IList<char>* list4 = new ArrayList<char>(); // polymorphism
	delete list4;

	return 0;
	*/
}

