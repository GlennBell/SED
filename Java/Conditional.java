// Demonstrate if statement

import java.util.Scanner;
import java.util.concurrent.ThreadLocalRandom;

public class Conditional {
    public static void main(String [] args) {

        Scanner in = new Scanner(System.in);
    
        int answer = ThreadLocalRandom.current().nextInt(0, 10);

        String question = "What number am I thinking of? ";
    
        System.out.println("Guess a number between 0 and 9");
    
        while(true){
            System.out.printf(question);
            int guess = in.nextInt();
    
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

