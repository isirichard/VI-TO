#include "node.h"
#include "list.h"
#include <iostream>
using namespace std;
int main(){
	List<int> myfirstList;
	myfirstList.insert(1);
	myfirstList.insert(2);

	cout<< "hola"<< endl;
	myfirstList.show();

	return 0;
}