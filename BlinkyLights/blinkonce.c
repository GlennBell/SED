#include <stdio.h>
#include <unistd.h>
#include <wiringPi.h>

#define ON 1
#define OFF 0

int blink(int pin, int dur){
	digitalWrite(pin, ON);
	delay(dur);
	digitalWrite(pin, OFF);
	delay(dur);
	return(0);
}

int main(void){
	int pin = 17;
	int cntr;
	if(wiringPiSetupGpio() == -1){
		printf("Can't initialize the Pi GPIO\n");
		return(1);
	}
	pinMode(pin, OUTPUT);
	
	printf("The LED will blink ten times.\n");
	for(cntr=0; cntr < 10; cntr++){
		printf("Blink #%d\n", cntr+1);
		blink(pin, 1000);
	}
	
	return(0);
}
