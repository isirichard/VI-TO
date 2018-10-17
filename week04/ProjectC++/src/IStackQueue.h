#ifndef IStackQueue_H_
#define IStackQueue_H_

//Interface -> methods
template<class T>
class IStackQueue { //abstract class -> pure virtual
public:
	IStackQueue() {
		std::cout << "Calling IStackQueue constructor" << std::endl;
	}
	virtual void insert(T _node)=0; // pure virtual
	virtual int Size() = 0;
	virtual void show() = 0;

	virtual ~IStackQueue() {
		std::cout << "Calling IStackQueue destructor" << std::endl;
	}
};
#endif /* IStackQueue_H_ */
