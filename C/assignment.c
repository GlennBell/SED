#include <stdio.h>
#include <math.h>

/* Demonstrate C assignments */

int main(void){
	double right = 4.0;
	double left = 10.0;
	double answer, a, b;

	printf("left = %f\n", left);
	printf("right = %f\n", right);
	
	/* Assignment */
	answer = left + right;
	printf("left(%f) + right(%f) = %f\n", left, right, answer);
	
	/* Unary Operators */
	a = left;
	b = right;
	printf("left++ = %f\n", a++);
	a = left;
	printf("++left = %f\n", ++a);
	printf("right++ = %f\n", b++);
	b = right;
	printf("++right = %f\n", ++b);
	
	/* Power function */
	answer = pow(left, right);
	printf("left ^ right = %f\n", answer);
	
	return(0);
}
