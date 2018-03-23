#!/usr/bin/env python

# Demonstrate assignment operators

right = 4.0

left = 10.0

print "left = ", left
print "right = ", right

# Assignment
answer = left + right
print '\nleft(', left, ') + right(', right, ') = ', answer

# Plus Equals
a = left
b = right

print '\nleft(', left, ') += right(', right, ')'
a += b
print "left = ", a
print "right = ", b

# Minus Equals
a = left
b = right

print '\nleft(', left, ') -= right(', right, ')'
a -= b
print "left = ", a
print "right = ", b

# Multiply Equals
a = left
b = right

print '\nleft(', left, ') *= right(', right, ')'
a *= b
print "left = ", a
print "right = ", b

# Divide Equals
a = left
b = right

print '\nleft(', left, ') /= right(', right, ')'
a /= b
print "left = ", a
print "right = ", b

# Modulus Equals
a = left
b = right

print '\nleft(', left, ') %= right(', right, ')'
a %= b
print "left = ", a
print "right = ", b

# Exponent Equals
a = left
b = right

print '\nleft(', left, ') **= right(', right, ')'
a **= b
print "left = ", a
print "right = ", b

# Floor Equals
a = left
b = right

print '\nleft(', left, ') //= right(', right, ')'
a //= b
print "left = ", a
print "right = ", b
