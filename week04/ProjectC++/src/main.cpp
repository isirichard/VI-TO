
#include "SList.h"
#include "DList.h"
#include "CList.h"
#include "Stack.h"
using namespace std;


int main(){


	IList<int>* list = new CList<int>(); // polymorphism
	list->insert(10);
	list->insert(20);
	list->insert(30);
	list->show();
	std::cout<<list->Size()<<std::endl;
	delete list;

/*
	IStackQueue<int>* list = new Stack<int>(); // polymorphism
		list->insert(10);
		list->insert(20);
		list->insert(30);
		list->show();
		std::cout<<list->Size()<<std::endl;
	delete list;
*/
	return 0;
}
