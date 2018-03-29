#!/usr/bin/env python

# Demonstrate assignment operators

right = 6.0

left = 10.0

print "A = ", left
print "B = ", right

print '\nAssignment'
answer = left + right
print '\nC(', answer, ') = A(', left, ') + B(', right, ')'

print '\nPlus Equals'
a = left
b = right

print '\nA(', left, ') += B(', right, ')'
a += b
print "A = ", a
print "B = ", b

print '\nMinus Equals'
a = left
b = right

print '\nA(', left, ') -= B(', right, ')'
a -= b
print "A = ", a
print "B = ", b

print '\nMultiply Equals'
a = left
b = right

print '\nA(', left, ') *= B(', right, ')'
a *= b
print "A = ", a
print "B = ", b

print '\nDivide Equals'
a = left
b = right

print '\nA(', left, ') /= B(', right, ')'
a /= b
print "A = ", a
print "B = ", b

print '\nModulus Equals'
a = left
b = right

print '\nA(', left, ') %= B(', right, ')'
a %= b
print "A = ", a
print "B = ", b

print '\nExponent Equals'
a = left
b = right

print '\nA(', left, ') **= B(', right, ')'
a **= b
print "A = ", a
print "B = ", b

print '\nFloor Equals'
a = left
b = right

print '\nA(', left, ') //= B(', right, ')'
a //= b
print "A = ", a
print "B = ", b
