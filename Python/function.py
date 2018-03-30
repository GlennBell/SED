#!/usr/bin/env python

# Function to calculate the square of a number
def square(x):
    return x*x

# Function to double a number
def doubl(x):
    return x*2

# Get a number from the user
question = 'Enter a number: '
number = input(question)

# Output
print 'The square of ', number, ' is ', square(number)
print number, 'doubled is ', doubl(number)
