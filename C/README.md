# Introduction to C
**2019 Scout Engineering Day - Programming a Sensor Net**

The C Programming Language ...

* was created by Dennis Ritchie in 1972 for the UNIX operating system.
* is a compiled language.
* is cross platform (Windows, Linux, Android, *BSD, IOS, MacOS…)
* features a static type system and manual memory management.
* supports multiple programming paradigms, including imperative, functional programming, and procedural styles.
* C++ is a descendant of C, introducing Object Oriented Programming

## Table of Contents

* [Class Overview](../README.md)
* [Assignment Operator](#assignment-operator)
* [Conditional Statement](#conditional-statement)
* [Loop Statements](#loop-statements)
* [Exception Statement](#exception-statement)
* [Include Statement](#include-statement)
* [Function Statement](#function-statement)
* [C Exercise](#C-exercise)

## Assignment Operator
**Assign a value to a variable/constant**

C is strongly typed
* Must identify type for each variable
* E.g. int, float, double, char

C supports unary operators
* Increment/decrement variables
* E.g. a++, ++a, a--, --a

C supports all Python assignments, except
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

**Example Code:** *SED/C/assignment.c*

```c
#include <stdio.h>
#include <math.h>

/*
 * Demonstrate C assignments
 *
 * Compile with: gcc -o assignment assignment.c -lm
 *
 */


int main(void){
	double right = 6.0;
	double left = 10.0;
	double answer, a, b;

	printf("A = %f\n", left);
	printf("B = %f\n", right);
	
	/* Assignment */
    printf("\nAssignment\n");
	answer = left + right;
	printf("A(%f) + B(%f) = %f\n", left, right, answer);
	
	/* Unary Operators */
    printf("\nUnary Operators\n");
	a = left;
	b = right;
	printf("A++ = %f\n", a++);
	a = left;
	printf("++A = %f\n", ++a);
	printf("B++ = %f\n", b++);
	b = right;
	printf("++B = %f\n", ++b);
	
	/* Power function */
    printf("\nPower function\n");
	answer = pow(left, right);
	printf("A ^ B = %f\n", answer);
	
	return(0);
}
```

[Top](#introduction-to-c)

## Conditional Statement
**Make decisions based upon variable values**

Conditional statements allow the programmer to make logic decisions and conditionally execute code based upon that logic.

C has *if* and *switch* conditional statements.

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

**Example Code:** *SED/C/conditional1.c*

```c
/* 
 * Demonstrate the if statement 
 *
 * Compile with: gcc -o conditional1 conditional1.c
 *
 */

#include <stdio.h>

int main(void){
    /* Generate a random number */
	srand(time(NULL));
	int answer = rand() % 10;
	
	char question[] = "What number am I thinking of? ";
	printf("Guess a number between 0 and 9\n");
	
	while(1){
        /* Ask for a guess */
		printf(question);
		int guess;
		scanf("%d", &guess);
		
        /* Evaluate the response */
		if(guess < answer){
			printf("Too Low\n");
		} else if(guess > answer){
			printf("Too High\n");
		} else {
			printf("Great Guess!!!\n");
			break;
		}
	}
	return(0);
}
```

### Switch Statement
**Example Code:** *SED/C/conditional2.c*
```c
/*
 * Demonstrate the switch statement
 *
 * Compile with: gcc -o conditional2 conditional2.c
 */

#include <stdio.h>
#include <stdbool.h>

int main(void){
	char question[] = "Enter a number between 1 and 4: ";
	
	while(true){
        /* Query for a number between 1 and 4 */
		printf(question);
		int guess;
		scanf("%d", &guess);
		bool inrange = true;
		
        /* Evaluate the response */
		switch(guess){
			case 1:
				printf("You entered the number One\n");
                break;
            case 2:
				printf("You entered the number Two\n");
                break;
            case 3:
                printf("You entered the number Three\n");
                break;
            case 4:
                printf("You entered the number Four\n");
                break;
            default:
                /* Error condition */
                printf("Please try again!\n");
                inrange = false;
                break;
		}
        if(inrange){
            break;
        }
    }
    return(0);
}
```
[Top](#introduction-to-c)

## Loop Statements
**Execute a block of code multiple times**

A *for* loop executes a block of code based upon a counter or range.

A *while* loop executes a block of code based upon a condition.

**Example Code:** *SED/C/loop.c*

```c
/*
 * Demonstrate the For and While loops
 *
 * Compile with: gcc -o loop loop.c
 *
 */

#include <stdio.h>

int main(void){
	int i;

    /* For Loop in C */
    printf("For Loop: Count up by 2\n");
    for(i=1; i<=10; i+=2){
        printf("%d\n", i);
    }
    
    /* While Loop in C */
    printf("While Loop: Count down by 2\n");
    while( i > 0 ){
		printf("%d\n", i);
        i = i - 2;
    }

	return(0);
}
```
[Top](#introduction-to-c)

## Exception Statement
**Catch and handle exceptions (i.e. errors)**

C does not support an explicit exception mechanism.

C++, a decendent of C, introduces exceptions.

[Top](#introduction-to-c)

## Include Statement
**Include modules providing reusable functions and classes**

Include allows the programmer to re-use previously written code external to the program. It allows programmers to leverage application programming interfaces (API) written by others to interact with complex services without being concerned with the implementation details.

**Example Code:** *SED/C/assignment.c*

```c
#include <stdio.h>
#include <math.h>

/*
 * Demonstrate C assignments
 *
 * Compile with: gcc -o assignment assignment.c -lm
 *
 */


int main(void){
    double right = 6.0;
    double left = 10.0;
    double answer, a, b;

    printf("A = %f\n", left);
    printf("B = %f\n", right);

    /* Assignment */
    printf("\nAssignment\n");
    answer = left + right;
    printf("A(%f) + B(%f) = %f\n", left, right, answer);

    /* Unary Operators */
    printf("\nUnary Operators\n");
    a = left;
    b = right;
    printf("A++ = %f\n", a++);
    a = left;
    printf("++A = %f\n", ++a);
    printf("B++ = %f\n", b++);
    b = right;
    printf("++B = %f\n", ++b);

    /* Power function */
    printf("\nPower function\n");
    answer = pow(left, right);
    printf("A ^ B = %f\n", answer);

    return(0);
}
```
[Top](#introduction-to-c)

## Function Statement
**Organize code into sub-routines**
* **Frequently used code**
* **Abstract concepts**

Functions allow the programmer to re-use code within the program. It allows programmers to abstract implementation details into discrete routines. Functions can significantly improve code readability.

**Example Code:** *SED/C/function.c*

```c
/*
 * Demonstrate C Functions
 *
 * Compile with: gcc -o function function.c
 *
 */

#include <stdio.h>

/*
 * Define a function to square a number
 */
int square(int number){
    int retval = number * number;
    return retval;
}

/*
 * Define a function to double a number
 */
int doubl(int number){
    int retval = number * 2;
    return retval;
}

/*
 * Main function
 */
int main(void){
    int number;

    /* Ask for a number */
    printf("Enter a number: "); 
    scanf("%d", &number);

    /* Output computed values */
    printf("The square of %d is %d.\n", number, square(number));
    printf("%d doubled is %d\n", number, doubl(number));

    return(0);
}
```

[Top](#introduction-to-c)

## C Exercise
1. Open Geany Programmer’s Editor
2. Select a program to edit (src -> SED -> C)
3. Each member of the team, do one or more of the following:
	1. Change code logic
	2. Modify variables to change program execution
	3. Move a code block to a function
	4. Add comments to the code to describe your changes
4. Compile and Execute!
	1. Open a terminal session
	2. Change to the C Source Directory
	```bash
	cd src/SED/C
	```
	3. Compile using gcc (Hint: The compiler command is in the sample comments)
	```bash
	gcc –o program program.c [-l<libs>]
	```
	4. Execute
	```bash
	./program
	```

[Top](#introduction-to-c)