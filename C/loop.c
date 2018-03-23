#include <stdio.h>

int main(void){
	int i;

    printf("For Loop: Count up by 2\n");
    for(i=1; i<=10; i+=2){
        printf("%d\n", i);
    }
    
    printf("While Loop: Count down by 2\n");
    while( i > 0 ){
		printf("%d\n", i);
        i = i - 2;
    }

	return(0);
}
