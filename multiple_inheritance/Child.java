interface GrandFather {
    default void write() {
        System.out.println("write method executed");
    }
}

interface Parent1 extends GrandFather {}

interface Parent2 extends GrandFather {}

public class Child implements Parent1, Parent2 {
    public static void main(String[] args) {
        Child c = new Child();
        c.write();
    }
}