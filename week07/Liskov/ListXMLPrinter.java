public class ListXMLPrinter implements ListPrinter{
	
	public ListXMLPrinter(){

	}

	public void print(AbstractList _list){
		_list.description();
		System.out.println("Printing using XML");
	}
}