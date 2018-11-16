
#include "SList.h"
using namespace std;


int main(){
	AbstractList<int>* AList = new SList<int>(); // polymorphism
	AList->insert(10);
	AList->insert(20);
	AList->insert(30);
	std::cout<<AList->Size()<<std::endl;
	return 0;
}