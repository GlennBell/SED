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
