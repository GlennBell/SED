#!/usr/bin/env python
import RPi.GPIO as GPIO
 
TiltSensorPin = 7 #Sensor is connected to GPIO 17
 
Led_status = 1
 
def setup():
    GPIO.setmode(GPIO.BOARD)       # GPIO will be numbered
    GPIO.setup(TiltSensorPin, GPIO.IN, pull_up_down=GPIO.PUD_UP)
 
def swLed(ev=None):
    global Led_status
    Led_status = not Led_status
    if Led_status == 1:
        print 'Field Change #1'
    else:
        print 'Field Change #2'
 
def loop():
    GPIO.add_event_detect(TiltSensorPin, GPIO.FALLING, callback=swLed) # wait for falling
    while True:
        pass   # Do nothing
 
def destroy():
    GPIO.cleanup()                     # Rlease or clean resource
 
if __name__ == '__main__': 
    setup()
    try:
        loop()
    except KeyboardInterrupt:  # When press control C child program will distroy
        destroy()
