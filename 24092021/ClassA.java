public class ClassA{
	public int x = 20;
	
	public void show(){
		System.out.println("Hello from ClassA");
	}
	
	public static void main(String args[]){
		ClassB cb = new ClassB();
		System.out.println(cb.x); 
		cb.show(); 
	}
}

class ClassB extends ClassA{
}

class ClassC extends ClassB{
	public int z = 19;
}
