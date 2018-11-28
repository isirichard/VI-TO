public class NoDip {
	public static void main(String [] args){
		CList myCList = new CList();
		SList mySList = new SList();
		ListGraphVizPrinter printer = new ListGraphVizPrinter();
		printer.print(mySList); 
	}
}