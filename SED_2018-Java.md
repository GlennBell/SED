# Introduction to Java
**2018 Scout Engineering Day - Programming a Sensor Net**

The Java Programming Language ...

* was created by John Gosling at Sun Microsystems and first released in 1995.
* has attributes of both an interpreted and compiled language.
* is cross platform (Windows, Linux, Android, *BSD, IOS, MacOS…)
* features a static type system and automatic memory management.
* supports multiple programming paradigms, including object-oriented, imperative, functional programming, and procedural styles.


## Table of Contents

* [Class Overview](README.md)
* [Assignment Operator](#assignment-operator)
* [Conditional Statement](#conditional-statement)
* [Loop Statements](#loop-statements)
* [Exception Statement](#exception-statement)
* [Import Statement](#import-statement)
* [Method Statement](#method-statement)
* [Java Exercise](#java-exercise)

## Assignment Operator
**Assign a value to a variable/constant**
Java is strongly typed
* Must identify type for each variable
* E.g. int, float, double, char, String

Java supports unary operators
* Increment/decrement variables
* E.g. a++, ++a, a--, --a

Java supports all Python assignments, except
* Power operator
* Floor operator

**Arithmetic Operators**

Assume A = 10 and B = 6 in each of the examples.

| Operator | Description | Example | Effect |
|----------|-------------|---------|--------|
| = | Assign left value to right operand | C = A + B | A and B are added and *16* is assigned to C |
| ++ | Increment the value of the variable by one | A++ | The value of A is incremented by one and *11* is assigned to A |
| -- | Decrement the value of the variable by one | A-- | The value of A is decremented by one and *9* is assigned to A |
| += | Add right and left values and assign to left operand | A += B | B is added to A and *16* is assigned to A |
| -= | Subtract right and left values and assign to left operand | A -= B | B is subtracted from A and *4* is assigned to A |
| \*= | Multiply right and left values and assign to left operand | A \*= B | A is multiplied by B and *60* is assigned to A |
| /= | Divide right and left values and assign to left operand | A /= B | A is divided by B and *1.6* is assigned to A |
| %= | Takes modulus of two operands and assigns to the left operand | A %= B | A is divided by B and remainder of *4* is assigned to A |

**Example Code:** *SED/Java/Assignment.java*

```java
public class Assignment {
    public static void main (String[] args){
        double right = 6.0;
        double left = 10.0;
        double answer, a, b;

        System.out.println("A = " + left);
        System.out.println("B = " + right);

        // Assignment
        System.out.println("\nAssignment");
        answer = left + right;
        System.out.println("A(" + left +
                           ") + B(" + right +
                           ") = " + answer);

        // Unary Operators
        System.out.println("\nUnary Operator");
        a = left;
        b = right;

        System.out.println("A++ = " + a++);
        a = left;
        System.out.println("++A = " + ++a);
        System.out.println("B-- = " + b--);
        b = right;
        System.out.println("--B = " + --b);

        // Power function
        System.out.println("\nPower Function");
        a = left;
        b = right;

        System.out.println("A^B = " + Math.pow(a, b));
    }
} 
```

[Top](#introduction-to-java)

## Conditional Statement
**Make decisions based upon variable values**

Conditional statements allow the programmer to make logic decisions and conditionally execute code based upon that logic.

Java has *if* and *switch* conditional statements.

**Logical Operators**

Assume A = 10 and B = 6 in each of the examples.

| Operator | Description | Example | Effect |
|----------|-------------|---------|--------|
| == | Compare two operands, evaluates to True if they are equal | A == B | Evaluates to *False* |
| != | Compare two operands, evaluates to True if they are not equal | A != B | Evaluates to *True* |
| <> | Compare two operands, evaluates to True if they are not equal | A <> B | Evaluates to *True* |
| > | Compare two operands, evaluates to True if the left operand is greater than the right  | A > B | Evaluates to *True* |
| < | Compare two operands, evaluates to True if the left operand is less than the right  | A < B | Evaluates to *False* |
| >= | Compare two operands, evaluates to True if the left operand is greater than or equal to the right  | A >= B | Evaluates to *True* |
| <= | Compare two operands, evaluates to True if the left operand is less than or equal to the right  | A <= B | Evaluates to *False* |

### If Statement
**Example Code:** *SED/Java/Conditional.java*

```java
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
```
### Switch Statement
**Example Code:** *SED/Java/Conditional2.java*
```java
// Demonstrate switch statement

import java.util.Scanner;

public class Conditional2 {
    public static void main(String [] args) {

        // Method to accept input from standard input
        Scanner in = new Scanner(System.in);
    
        String question = "Enter a number between 1 and 4: ";
    
        while(true){
            // Ask for a number
            System.out.printf(question);
            int guess = in.nextInt();
            boolean inrange = true;
    
            // Identify the number
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

            // Check if the user can follow directions
            if(inrange){
                break;
            }
        }
    }
}
```

[Top](#introduction-to-java)

## Loop Statements
**Execute a block of code multiple times**

A *for* loop executes a block of code based upon a counter or range.

A *while* loop executes a block of code based upon a condition.

**Example Code:** *SED/Java/Loop.java*

```java
// Demonstrate loops

public class Loop {
    public static void main(String [] args) {
        int i;

        // For Loop
        System.out.println("For Loop: Count up by 2");
        for(i=1; i<=10; i+=2){
            System.out.println(i);
        }
    
        // While Loop
        System.out.println("While Loop: Count down by 2");
        while( i > 0 ){
            System.out.println(i);
            i = i - 2;
        }
    }
}
```
[Top](#introduction-to-java)

## Exception Statement
**Catch and handle exceptions (i.e. errors)**

Exception statements allow the programmer to gracefully handle error conditions.

Exception statements have two parts: try and catch. 

* The *try* section contains a block of code that may result in an error condition. 
* The *catch* section gracefully handles the error condition.

**Code Example:** *SED/Java/Exception.py*
```java
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
```
[Top](#introduction-to-java)

## Import Statement
**Import modules providing reusable functions and classes**

Import allows the programmer to re-use previously written code external to the program. It allows programmers to leverage application programming interfaces (API) written by others to interact with complex services without being concerned with the implementation details.

**Example Code:** *SED/Java/Conditional.java*

```java
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
```
[Top](#introduction-to-java)

## Method Statement
**Organize code into sub-routines**
* **Frequently used code**
* **Abstract concepts**

Methods allow the programmer to re-use code within the program. It allows programmers to abstract implementation details into discrete routines. Methods can significantly improve code readability.

**Example Code:** *SED/Java/Method.java*

```java
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
```

[Top](#introduction-to-java)

## Java Exercise
1. Open BlueJ Java IDE
2. Select the SED-Programming Project
3. Select a class to edit
	1. Right-Click on the desired class and select Open Editor
4. Each member of the team, do one or more of the following:
	1. Change code logic
	2. Modify variables to change program execution
	3. Move a code block to a method
	4. Make sure you add comments to identify your work
5. Compile and Execute!

[Top](#introduction-to-java)