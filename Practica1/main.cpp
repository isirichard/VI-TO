#include "node.h"
#include "list.h"
#include <iostream>
using namespace std;
int main(){
	List<int> myfirstList;
	//List<int>* myfirstList = new List<int>();
	myfirstList.insert(1);
	myfirstList.insert(2);
	myfirstList.insert(3);
	myfirstList.insert(4);
	//printf("%i\n", myfirstList.at(2));
	//myfirstList.erase(2);
	//myfirstList.remove(4);
	myfirstList.reverse();
	myfirstList.load("prueba.txt");
	//myfirstList.save("prueba.txt");
	//cout<< "hola"<< endl;
	myfirstList.show();

	return 0;
}



