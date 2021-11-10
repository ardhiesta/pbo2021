public class MyThread extends Thread {
    public void run(){
        System.out.println("MyThread running by "+getName());
    }

    public static void main(String[] args) {
        MyThread myThread = new MyThread();
        myThread.start();

        MyThread myThread2 = new MyThread();
        myThread2.start();
    }
}
