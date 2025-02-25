import java.util.Scanner;

public class converter{
    public static void main(String[] args) {
        Scanner myScanner = new Scanner(System.in);
        boolean cont = true;

        while (cont) {
            System.out.println("Enter your binary:");
            String binary = myScanner.nextLine();
    
            try{
                int decimalNumber=Integer.parseInt(binary,2);
                System.out.println(decimalNumber);
                
            }catch(NumberFormatException e){
                System.out.println("Binary invalid.");
            }

            System.out.println("Do you wanna to convert another binary number? (y/n)");
            String answer = myScanner.nextLine();

            if (answer.equals("n") || answer.equals("N")) {
                cont=false;
                System.out.println("Program ended.");
            }
            
        }
        myScanner.close();
    }
}