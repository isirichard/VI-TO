#ifndef AbstractNode_H_
#define AbstractNode_H_

//Abstract class
template <class T>
class AbstractNode {
	private:
		T data;
		AbstractNode<T>* next;
	
	public:
		AbstractNode(){	
			printf("Constructor \n");		
		}
		
		AbstractNode(const AbstractNode& _node){ //const hace que no puedo modificar los datos por referencia
			data = _node.data;
			//_node.data = 10000 //este archivo viola el encapsulamiento pero con const no deja
			next = _node.next;	
		}
		
		virtual ~AbstractNode(){
			printf("Destructor \n");			
		}
		
		T getData(){
			return data;
		}
	
		void setData(T _data){
			this->data = _data;
		}
	
		AbstractNode<T>* getNext(){
			return next;	 	
		}
	
		void setNext(AbstractNode<T>*_next ){
			this->next = _next;
		}
		
};

#endif /* AbstractList_H_ */
