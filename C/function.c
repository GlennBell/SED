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
