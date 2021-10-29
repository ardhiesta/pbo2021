public class Class1 {
    int x1;
    Class2 x2;

    public static void main(String args[]){
        Class1 c1 = new Class1();
        c1.setX1(12);

        Class2 c2 = new Class2();
        c2.setA(1);
        c2.setB(2);

        c1.setX2(c2);
    }

    void setX2(Class2 c2){
        x2 = c2;
    }

    Class2 getX2(){
        return x2;
    }

    void setX1(int a){
        x1 = a;
    }

    int getX1(){
        return x1;
    }
}
