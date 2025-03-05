import java.util.Scanner;

public class BinaryToDecimal {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean continueConversion = true;

        while (continueConversion) {
            System.out.println("##### Binary & Decimal Converter ######");
            System.out.println("1 Binary to Decimal");
            System.out.println("2 Decimal to Binary");
            System.out.println("3 Exit");
            System.out.println("Choose an option: ");

            int option = scanner.nextInt();

            switch (option) {
                case 1 -> {
                    boolean keepConverting = true;
                    while (keepConverting) {
                        System.out.println("Type your binary number: ");
                        String binary = scanner.next();

                        try {
                            int decimal = Integer.parseInt(binary, 2);
                            System.out.println("The decimal value is: " + decimal);


                            System.out.println("Do you want to convert another binary number? (y/n): ");
                            String response = scanner.next();
                            if (response.equalsIgnoreCase("n")) {
                                keepConverting = false;
                            }

                        } catch (NumberFormatException e) {
                            System.out.println("Invalid number. Please try again: ");
                        }
                    }
                }
                case 2 -> {
                    boolean keepConverting = true;
                    while (keepConverting) {
                        System.out.println("Type your decimal number: ");
                        try {
                            String input = scanner.next();

                            if (!input.matches("\\d+")) {
                                throw new NumberFormatException("Input contains invalid character or decimal.");
                            }
                            int decimal = Integer.parseInt(input);
                            String binary = Integer.toBinaryString(decimal);
                            System.out.println("The binary value is: " + binary);

                            System.out.println("Do you want to convert another decimal number? (y/n): ");
                            String response = scanner.next();
                            if (response.equalsIgnoreCase("n")){
                                keepConverting = false;
                            }
                        } catch (NumberFormatException e){
                            System.out.println("Invalid decimal number. Please try again.");
                        }
                    }
                }
                default -> System.out.println("Invalid option, please try again: ");
            }
            if (option != 3 && continueConversion){
                System.out.println("Do you wanna to go back to the menu? (y/n): ");
                String response = scanner.next();
                if (response.equalsIgnoreCase("n")){
                    continueConversion = false;
                    System.out.println("Exiting the program. Goodbye!");
                }
            }
        }
        scanner.close();
    }
}