#!/usr/bin/env python
# Demonstrate exception handling

quesA = 'Enter a number: '
quesB = 'Enter another number: '

numA = float(input(quesA))
numB = float(input(quesB))

try:
    answer = numA / numB
    print 'Divide ', numA, ' by ', numB, ' = ', answer, '\n'
except ZeroDivisionError:
    print "Very naughty, you can't divide by zero!\n"
