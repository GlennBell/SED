#!/usr/bin/env python

import RPi.GPIO as GPIO
import time

# https://diyhacking.com/raspberry-pi-robot/

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)
GPIO.setup(3, GPIO.IN)  #Sensor connection

try:
    while True:
        sensor=GPIO.input(3)  #Reading output of IR sensor

        if sensor == 0:       #IR sensor detects an object
            print "Obstacle detected ",sensor
            time.sleep(0.1)

except KeyboardInterrupt:
    print "Bye"
    # Cleanup
    GPIO.cleanup()
