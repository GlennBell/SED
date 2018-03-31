// Demonstrate Java Methods
//

import java.util.Scanner;

public class Method {

    // Define a method to square a number
    //
    public static int square(int number){
        int retval = number * number;
        return retval;
    }

    // Define a method to double a number
    //
    public static int doubl(int number){
        int retval = number * 2;
        return retval;
    }

    // Main method
    //
    public static void main(String [] args) {

        // Class to read from standard input
        Scanner in = new Scanner(System.in);
   
        // Query the user for a number
        System.out.println("Enter a number: ");
        int number = in.nextInt();

        // Output
        System.out.println("The square of " + number + " is " + square(number));
        System.out.println(number + " doubled is " + doubl(number));
    }
}
