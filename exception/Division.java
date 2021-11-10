import java.util.Scanner;

public class Division {
    void bagiBilangan() throws NumberFormatException {
        Scanner myObj = new Scanner(System.in);  // Create a Scanner object
        System.out.println("Masukkan bilangan 1");
        Double b1 = Double.parseDouble(myObj.nextLine());  // Read user input
        System.out.println("Masukkan bilangan 2");
        Double b2 = Double.parseDouble(myObj.nextLine());  // Read user input
        System.out.println(b1/b2);
    }

    public static void main(String[] args) {
        Division dv = new Division();
        
        try {
            dv.bagiBilangan();
        } catch (NumberFormatException e) {
            // melakukan sesuatu kalau terjadi exception
            // error karena user belum mengetik bilangan yang dibagi
            // user diminta input ulang bilangan
        }
        
    }
}
