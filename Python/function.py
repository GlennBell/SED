#!/usr/bin/env python

def square(x):
    return x*x

def doubl(x):
    return x*2

question = 'Enter a number: '
number = input(question)

print 'Number^2 = ', square(number)
print 'Number * 2 = ', doubl(number)
