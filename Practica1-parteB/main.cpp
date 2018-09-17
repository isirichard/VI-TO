#include <iostream>

#include "../week1/list.h"
#include "../week1/node.h"
using namespace std;
int main(){
	List<int> myfirstList;
	List<int>* myfirstList2 = new List<int>();
	myfirstList.insert(1);
	myfirstList.insert(2);
	myfirstList.insert(3);
	myfirstList.insert(4);
	//printf("%i\n", myfirstList.at(2));
	//myfirstList.erase(2);
	//myfirstList.remove(4);
	myfirstList.reverse();
	myfirstList<<(5);
	//cout << myfirstList[1];
	//myfirstList.load("prueba.txt");
	//myfirstList.clear();
	//myfirstList.load("prueba.txt");
	//cout<< "hola"<< endl;

	myfirstList.show();

	return 0;
}


