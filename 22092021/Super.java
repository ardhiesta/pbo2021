class Super {
	int x = 20;
	
	void show() {
		System.out.println("Hello from Super class");
	}
	
	public static void main(String args[]){
		Sub sb = new Sub();
		System.out.println(sb.x);
		sb.show();
	}
}

class Sub {
	
}

class Class3 extends Super, Sub {
	
}
