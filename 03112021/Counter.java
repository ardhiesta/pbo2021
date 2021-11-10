public class Counter extends Thread {
    int val;

    Counter(int v) {
        this.val = v;
    }

    protected long count = 0;

    // public void add(long value){
    //     this.count = this.count + value;
    // }

    public void run(){ 
        this.count = this.count + this.val;
    }

    public static void main(String[] args) {
        Counter c1 = new Counter(2);
        c1.start();
        Counter c2 = new Counter(3);
        c2.start();
    }
 }