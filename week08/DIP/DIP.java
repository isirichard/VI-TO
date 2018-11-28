public class DIP {
	public static void main(String [] args){
		SList mySList = new SList();
		CList myCList = new CList();
		ListPrinter printer = new ListGraphVizPrinter();
		printer.print(myCList);
		printer.print(mySList);
	}
}