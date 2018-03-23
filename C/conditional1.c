#include <stdio.h>

/* Demonstrate the if statement */

int main(void){
	srand(time(NULL));
	int answer = rand() % 10;
	
	char question[] = "What number am I thinking of? ";
	printf("Guess a number between 0 and 9\n");
	
	while(1){
		printf(question);
		int guess;
		scanf("%d", &guess);
		
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
