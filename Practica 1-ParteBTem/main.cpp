
#include "list.h"
using namespace std;


int main(){
	IList<int>* list = new List<int>(); // polymorphism
	//list->insert(new CNode<int>(19));
	std::cout<< list->Size() << std::endl;
	delete list;
	return 0;
}