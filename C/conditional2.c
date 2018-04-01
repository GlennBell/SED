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

