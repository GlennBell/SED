/* Sample code to interact with a Hall Sensor
 *
 * WiringPi Library available at http://wiringpi.com
 */

#include <wiringPi.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <time.h>

/* Define the GPIO pin to monitor */
#define SensorPin 7

static volatile int globalCntr = 0;

/*
 * Generate a timestamp
 */
char* current_time(void){
    time_t right_now;
    char* time_string;

    right_now = time(NULL);

    time_string = ctime(&right_now);

    return(time_string);
}
    
/*
 * Report a sensor state falling
 */
void sensorLO(void){
    printf("Magetic Field OFF at %s\n", current_time());
    ++globalCntr;

    return;
}

/*
 * Report a sensor state rising
 */
void sensorHi(void){
    printf("Magnetic Field Detected at %s\n", current_time());
    ++globalCntr;

    return;
}

/*
 * Watch the sensor for a state changes
 */
int main(void){
    int cntr = globalCntr;

    /* Set up the PI */
    if(wiringPiSetup() < 0){
        fprintf(stderr, "Wiring PI Initialization Failedi: %s\n", strerror (errno));
        return 1;
    }

    /*
     * Watch for a magnetic field
     */
    if(wiringPiISR(SensorPin, INT_EDGE_RISING, &sensorHI) < 0){
        fprintf(stderr, "Unable to set up ISRi Rising: %s\n", strerror (errno));
        return 1;
    }

    /*
     * Watch for the field to go away
     */
    if(wiringPiISR(SensorPin, INT_EDGE_FALLING, &sensorLO) < 0){
        fprintf(stderr, "Unable to set up ISR Falling: %s\n", strerror (errno));
        return 1;
    }

    /*
     * Loop forever looking for state changes
     */
    while(1){
        printf("Waiting..."); fflush (stdout);

        while(cntr == globalCntr)
            delay(100);

        printf (" Done. %5d state changes.\n", globalCntr);
        cntr = globalCntr;
    }

    return 0;
}
