public class Template2 {
    // create a generics method
    public <T> void show(T data) {
        System.out.println("Data : " + data);
    }

    public static void main(String[] args) {
        Template2 t2 = new Template2();

        // generics method working with String
        t2.<String>show("Java Programming");

        // generics method working with integer
        t2.<Integer>show(25);

        // generics method working with double
        t2.<Double>show(25.1678);

        // generics method working with boolean
        t2.<Boolean>show(true);
    }
}
