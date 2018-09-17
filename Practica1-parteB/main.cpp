#include <iostream>

#include "IList.h"
#include "CNode.h"
#include "SimpleList.h"
using namespace std;
int main(){
	IList<int> * myList = new SimpleList<int>();
	delete myList;
	return 0;
}


