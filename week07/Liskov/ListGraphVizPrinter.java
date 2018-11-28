public class ListGraphVizPrinter implements ListPrinter{
	ListGraphVizPrinter(){

	}

	public void print(AbstractList list){
		list.description();
		System.out.println("Printing using GraphViz");
	}
}