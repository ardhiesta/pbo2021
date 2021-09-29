public class Demo{
	void display(){
		System.out.println("hello");
	}
	
	void display(String name){
		System.out.println("hello, "+name);
	}
	
	void display(String message, String name){
		System.out.println("please "+message+", "+name);
	}
	
	public static void main(String args[]){
		Demo dm = new Demo();
		dm.display();
		dm.display("rudi");
		dm.display("open the door", "rudi");
	}
}
