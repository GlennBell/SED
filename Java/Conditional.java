// Demonstrate if statement

import java.util.Scanner;
import java.util.concurrent.ThreadLocalRandom;

public class Conditional {
    public static void main(String [] args) {

        // Class to read from standard input
        Scanner in = new Scanner(System.in);
    
        // Generate a random number
        int answer = ThreadLocalRandom.current().nextInt(0, 10);

        String question = "What number am I thinking of? ";
    
        System.out.println("Guess a number between 0 and 9");
    
        while(true){
            // Ask for input
            System.out.printf(question);
            int guess = in.nextInt();
    
            // Check to see if the input matches the random number
            if( guess < answer){
                System.out.println("Too Low");
            } else if( guess > answer ){
                System.out.println("Too High");
            } else {
                System.out.println("Great Guess!!!");
                break;
            }
        }
    }
}

