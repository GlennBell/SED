// Demonstrate switch statement

import java.util.Scanner;

public class Conditional2 {
    public static void main(String [] args) {

        Scanner in = new Scanner(System.in);
    
        String question = "Enter a number between 1 and 4: ";
    
        while(true){
            System.out.printf(question);
            int guess = in.nextInt();
            boolean inrange = true;
    
            switch(guess){
                case 1:
                    System.out.println("You entered the number One");
                    break;
                case 2:
                    System.out.println("You entered the number Two");
                    break;
                case 3:
                    System.out.println("You entered the number Three");
                    break;
                case 4:
                    System.out.println("You entered the number Four");
                    break;
                default:
                    System.out.println("Please try again!");
                    inrange = false;
                    break;
                    
            }
            if(inrange){
                break;
            }
        }
    }
}

