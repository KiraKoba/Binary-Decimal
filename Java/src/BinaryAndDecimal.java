import java.util.Scanner;

public class BinaryAndDecimal {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean loopMenu = true;

        //Menu
        while (loopMenu) {
            System.out.println("#####Binary & Decimal Converter#####");
            System.out.println("1 - Binary to Decimal");
            System.out.println("2 - Decimal to Binary");
            System.out.println("3 - Exit");
            System.out.println("Choose an option: :");

            int option = 0;
            boolean validInput = false;

            while (!validInput) {
                try{
                    String input = scanner.next();
                    if (!input.matches("\\d+")) {
                        throw new NumberFormatException("Input invalid, please choose 1, 2 or 3: ");
                    }
                    option = Integer.parseInt(input);
                    validInput = true;
                }catch (NumberFormatException e){
                    System.out.println("Input invalid, please choose 1, 2 or 3: ");
                }
            }

            switch (option){
                case 1 -> convertToBinary(scanner);
                case 2 -> convertToDecimal(scanner);
                case 3 -> loopMenu = askExit(scanner);
                default -> System.out.println("Invalid option, please try again: ");
            }
            if (option !=3){
                loopMenu = askReturnMenu(scanner);
            }
        }
        scanner.close();
    }

    //Binary to decimal
    private static void convertToBinary(Scanner scanner) {
        boolean keepConverting = true;
        while (keepConverting) {
            System.out.println("Please enter a Binary Number: ");
            String binary = scanner.next();

            try{
               int decimal = Integer.parseInt(binary, 2);
                System.out.println("The decimal number is: " + decimal);
                keepConverting = askContinueConversion(scanner,"binary");
            } catch (NumberFormatException e){
                System.out.println("Invalid number, please try again: ");
            }
        }
    }

    //Decimal to binary
    private static void convertToDecimal(Scanner scanner) {
        boolean keepConverting = true;
        while (keepConverting) {
            System.out.println("Please enter a Decimal Number: ");
            try{
                String input = scanner.next();

                if (!input.matches("\\d+")){
                    throw new NumberFormatException("Invalid number, please try again: ");
                }
                int decimal = Integer.parseInt(input);
                String binary = Integer.toBinaryString(decimal);
                System.out.println("The binary number is: " + binary);

                keepConverting = askContinueConversion(scanner,"decimal");
            }catch (NumberFormatException e){
                System.out.println("Invalid number, please try again: ");
            }
        }
    }

    //ask if you want to continue
    private static boolean askContinueConversion(Scanner scanner, String type) {
        boolean validResponse = false;
        boolean keepConverting = true;

        while (!validResponse) {
            System.out.println("Do you want to convert another " +type+ " number? (y/n)");
            String answer = scanner.next();
            if (answer.equals("y")) {
                validResponse = true;
            }
            else if (answer.equals("n")) {
                validResponse = true;
                keepConverting = false;
            }
            else {
                System.out.println("Invalid answer, please enter 'y' or 'n': ");
            }
        }
        return keepConverting;
    }

    //ask if you want to exit
    private static boolean askExit(Scanner scanner) {
        boolean keepConverting = true;
        boolean validResponse = false;

        while (!validResponse) {
            System.out.println("Do you want to exit? (y/n)");
            String answer = scanner.next();
            if (answer.equals("y")) {
                System.out.println("Thank you for using Binary Decimal Converter!");
                System.out.println("Exiting...");
                validResponse = true;
                keepConverting = false;
            }
            else if (answer.equals("n")) {
                System.out.println("Backing to main menu...");
                validResponse = true;
            }
            else {
                System.out.println("Invalid answer, please enter 'y' or 'n': ");
            }
        }
        return keepConverting;
    }

    //ask if you want to back to the menu
    private static boolean askReturnMenu(Scanner scanner) {
        boolean validResponse = false;
        boolean keepConverting = true;

        while (!validResponse) {
            System.out.println("Do you want go back to the menu? (y/n): ");
            String answer = scanner.next();
            if (answer.equals("y")) {
                validResponse = true;
            }
            else if (answer.equals("n")) {
                validResponse = true;
                keepConverting = false;
            }
            else {
                System.out.println("Invalid answer, please enter 'y' or 'n': ");
            }
        }
        return keepConverting;
    }
}
