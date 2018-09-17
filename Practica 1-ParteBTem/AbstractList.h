
#include "IList.h"
//Abstract class
template <class T>
class AbstractList : public IList<T>{
	protected:
		CNode<T>* proot;
		int size;

		int Size(){
		  return size;
		}
	public:
		AbstractList(){
			std::cout<<"calling the constructor for AbstractList"<<std::endl;
			size = 0;
		}
		virtual ~AbstractList(){
			std::cout<<"calling the destructor for AbstractList" << std::endl;
		}
		virtual void insert(CNode<T>* _node) = 0; // pure virtual
};