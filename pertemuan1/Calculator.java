import java.util.Scanner;

public class Calculator{
    int A, B;
    static final Scanner scanner = new Scanner(System.in);

    void get(){
        System.out.print("Masukkan bilangan pertama ");
        this.A = Integer.parseInt(scanner.nextLine());
        System.out.print("Masukkan bilangan kedua ");
        this.B = Integer.parseInt(scanner.nextLine());
    }

    void add(){
        System.out.println(this.A + this.B);
    }

    void sub(){
        System.out.println(this.A - this.B);
    }

    void mul(){
        System.out.println(this.A * this.B);
    }

    void div(){
        System.out.println(Double.parseDouble(String.valueOf(this.A)) 
        / Double.parseDouble(String.valueOf(this.B)));
    }

    int ask(){
        System.out.println("Ketik 1 untuk menjumlahkan 2 bilangan\n"
        +"Ketik 2 untuk mengurangkan 2 bilangan\n"
        +"Ketik 3 untuk mengalikankan 2 bilangan\n"
        +"Ketik 4 untuk membagi 2 bilangan\n"
        +"Ketik 0 untuk keluar dari program");

        System.out.print("Ketik pilihan anda ");
        int choice = Integer.parseInt(scanner.nextLine());
        return choice;
    }

    public static void main(String[] args){
        Calculator cal = new Calculator();
        int choice = cal.ask();
        while(choice >=1 && choice <=4){
            switch (choice){
                case 1: 
                    cal.get();
                    cal.add();
                    break;
                case 2: 
                    cal.get();
                    cal.sub();
                    break;
                case 3: 
                    cal.get();
                    cal.mul();
                    break;
                case 4: 
                    cal.get();
                    cal.div();
                    break;
            }
            choice = cal.ask();
        }
    }
}