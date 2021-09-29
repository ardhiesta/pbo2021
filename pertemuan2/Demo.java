public class Demo {
	private int cx, cy;
	
	public void inputData(int x, int y){
		this.cx = x;
		this.cy = y;
	}
	
	public void showData(){
		System.out.println("cx= "+cx+"\t cy= "+cy);
	}
	
	public static void main(String[] args) {
		Demo d1 = new Demo();
		d1.inputData(10,20);
		d1.showData();
	}
}
