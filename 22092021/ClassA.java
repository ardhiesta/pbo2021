public class ClassA{
	public int x = 20;
	
	public void show(){
		System.out.println("Hello from ClassA");
	}
	
	public static void main(String args[]){
		ClassB cb = new ClassB();
		System.out.println(cb.x); //2. Apa output yang didapatkan dari baris ini
		cb.show(); //3. Apa output yang didapatkan dari baris ini
		
		//4. Mengapa obj yang merupakan object dari ClassB dapat menggunakan atribut x dan function show, 
		// padahal di ClassB tidak dideklarasikan atribut dan function apapun
		
		//6. Apa yang dapat anda simpulkan dari konsep inheritance / pewarisan
	}
}

//1. Apa maksud dari extends ClassA pada baris di bawah ini
class ClassB extends ClassA{}

class ClassC extends ClassB{
	public int z = 19;
	
	//5. Tambahkan function untuk menjumlahkan atribut x dengan z
	//panggil function tersebut di dalam main
}
