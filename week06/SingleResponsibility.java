public class SingleResponsibility {
	public static void main(String [] args){
		ListSR myList = new ListSR();
		ListPrinter printer = new ListGraphVizPrinter(myList);
		printer.print();

	}
}