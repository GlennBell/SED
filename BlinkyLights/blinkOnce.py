#!/usr/bin/env python

#
# blinkOnce.py
#
# Control a blinking LED with RPi
#

import RPi.GPIO as GPIO
import time

# Initialize the GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setup(17,GPIO.OUT)

# Define a function to control the LED
def blinkOnce(pin):
	GPIO.output(pin,True)
	time.sleep(.5)
	GPIO.output(pin,False)
	time.sleep(.5)

# Run the function in a loop
try:
	for i in range(10):
		blinkOnce(17)
except KeyboardInterrupt:
	print "Bye"
	# Cleanup
	GPIO.cleanup()
