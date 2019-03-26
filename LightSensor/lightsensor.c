/* Source: http://www.raspberry-pi-geek.com/Archive/2017/22/The-BH1750-Digital-Light-Sensor
 *
 * Compile: cc -o lightsensor lightsensor.c -lwiringPi
 */
#include <wiringPiI2C.h>
#include <stdio.h>
#include <unistd.h>

int main (void) {
    int handle = wiringPiI2CSetup(0x23) ;
    for( int cntr=0; cntr<10; cntr++){
        wiringPiI2CWrite(handle,0x10);
        sleep(1);
        int word=wiringPiI2CReadReg16(handle,0x00);
        int lux=((word & 0xff00)>>8) | ((word & 0x00ff)<<8);
        printf("Current light intensity in Lux:%d \n",lux);
    }
    return 0;
}
