#ifndef AbstractTree_H_
#define AbstractTree_H_

//Interface -> methods
template <class T>
class AbstractTree{ //abstract class -> pure virtual
	public:
		AbstractTree(){

		}
		virtual void insert(T _node)=0; // pure virtual
		virtual int Size() = 0;
		virtual ~AbstractTree(){
		}
		virtual void display();
};
#endif /* AbstractTree_H_ */
