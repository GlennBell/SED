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
