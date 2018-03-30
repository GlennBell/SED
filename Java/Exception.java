// Demonstrate Exception Handling in Java

import java.util.Scanner;

public class Exception {
    public static void main(String [] args) {

        int answer;

        // Method to accept input from standard input
        Scanner in = new Scanner(System.in);

        String quesA = "Enter a number: ";
        String quesB = "Enter another number: ";

        //Ask for two numbers
        System.out.printf(quesA);
        int numA = in.nextInt();
        System.out.printf(quesB);
        int numB = in.nextInt();

        try{
            answer = numA / numB;
            System.out.printf("Divide " + numA + " by " + numB + " = " + answer + "\n");

        // Catch any divide by zero errors
        } catch (ArithmeticException e) {
            System.out.printf("Very naughty, you can't divide by zero!\n");
        }
    }
}
