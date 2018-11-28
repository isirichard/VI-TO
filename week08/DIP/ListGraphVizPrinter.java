public class ListGraphVizPrinter implements ListPrinter{
	ListGraphVizPrinter(){

	}

	public void print(List list){
		//add code for GraphViz 
		if (list instanceof CList ){
			System.out.println("ListGraphVizPrinter for CList");
		}
		if ( list instanceof SList){
			System.out.println("ListGraphVizPrinter for SList");
		}
	}
}