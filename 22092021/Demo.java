class Demo {
	int data;
	
	public Demo(){
		System.out.println("default constructor dipanggil");
	}
	
	public Demo(int x){
		data = x;
		System.out.println("constructor biasa dengan parameter dipanggil");
	}
	
	public Demo(Demo d){
		data = d.data;
		System.out.println("copy constructor dipanggil");
	}
	
	public static void main(String[] args) {
		Demo d1 = new Demo(100);
		Demo d2 = new Demo(d1);
		//Demo d2 = d1;
		System.out.println("data di d1 : "+d1.data);
		System.out.println(d2.equals(d1));
		System.out.println("data di d2 : "+d2.data);
	}
}
