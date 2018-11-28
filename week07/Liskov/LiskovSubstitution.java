public class LiskovSubstitution {
	public static void main(String [] args){
		CircularList clist = new CircularList();
		clist.insert();
		SimpleList slist = new SimpleList();
		slist.insert();

		ListGraphVizPrinter lgraphPrint = new ListGraphVizPrinter();
		lgraphPrint.print(clist);
		lgraphPrint.print(slist);
		ListXMLPrinter lxmlPrint = new ListXMLPrinter();
		lxmlPrint.print(clist);
		lxmlPrint.print(slist);
	}
}