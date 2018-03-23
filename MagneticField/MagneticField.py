#!/usr/bin/env python
#
# https://bitbucket.org/MattHawkinsUK/rpispy-misc/raw/master/python/hall.py
#
#--------------------------------------
#    ___  ___  _ ____
#   / _ \/ _ \(_) __/__  __ __
#  / , _/ ___/ /\ \/ _ \/ // /
# /_/|_/_/  /_/___/ .__/\_, /
#                /_/   /___/
#
#       Hall Effect Sensor
#
# This script tests the sensor on GPIO17.
#
# Author : Matt Hawkins
# Date   : 27/09/2015
#
# http://www.raspberrypi-spy.co.uk/
#
#--------------------------------------

# Import required libraries
import RPi.GPIO as GPIO
import time
import datetime

def sensorCallback1():
	# Called if sensor output goes LOW
	timestamp = time.time()
	stamp = datetime.datetime.fromtimestamp(timestamp).strftime('%H:%M:%S')
	print "Sensor LOW " + stamp

def sensorCallback2():
	# Called if sensor output goes HIGH
	timestamp = time.time()
	stamp = datetime.datetime.fromtimestamp(timestamp).strftime('%H:%M:%S')
	print "Sensor HIGH " + stamp

def main():
	# Wrap main content in a try block so we can
	# catch the user pressing CTRL-C and run the
	# GPIO cleanup function. This will also prevent
	# the user seeing lots of unnecessary error
	# messages.

	try:
		cntr = 0;
		# Loop until users quits with CTRL-C
		while True:
			GPIO.wait_for_edge(pin, GPIO.FALLING)
			sensorCallback1()
			GPIO.wait_for_edge(pin, GPIO.RISING)
			sensorCallback2()

	except KeyboardInterrupt:
		# Reset GPIO settings
		GPIO.cleanup()  
  
# Tell GPIO library to use GPIO references
GPIO.setmode(GPIO.BCM)

# Set Switch GPIO as input
pin = 17
GPIO.setup(pin , GPIO.IN, pull_up_down = GPIO.PUD_DOWN)

if __name__=="__main__":
   main()
