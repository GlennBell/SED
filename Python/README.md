# Introduction to Python
**2018 Scout Engineering Day - Programming a Sensor Net**

The Python Programming Language ...

* was created by Guido van Rossum and first released in 1991.
* is an interpreted language.
* is cross platform (Windows, Linux, Android, *BSD, IOS, MacOS…).
* features a dynamic type system and automatic memory management.
* supports multiple programming paradigms, including object-oriented, imperative, functional programming, and procedural styles.

## Table of Contents

* [Class Overview](README.md)
* [Assignment Operator](#assignment-operator)
* [Conditional Statement](#conditional-statement)
* [Loop Statements](#loop-statements)
* [Exception Statement](#exception-statement)
* [Import Statement](#import-statement)
* [Function Statement](#function-statement)
* [Python Exercise](#python-exercise)

## Assignment Operator
**Assign a value to a variable/constant**

**Arithmetic Operators**

Assume A = 10 and B = 6 in each of the examples.

| Operator | Description | Example | Effect |
|----------|-------------|---------|--------|
| = | Assign left value to right operand | C = A + B | A and B are added and *16* is assigned to C |
| += | Add right and left values and assign to left operand | A += B | B is added to A and *16* is assigned to A |
| -= | Subtract right and left values and assign to left operand | A -= B | B is subtracted from A and *4* is assigned to A |
| \*= | Multiply right and left values and assign to left operand | A \*= B | A is multiplied by B and *60* is assigned to A |
| /= | Divide right and left values and assign to left operand | A /= B | A is divided by B and *1.6* is assigned to A |
| %= | Takes modulus of two operands and assigns to the left operand | A %= B | A is divided by B and remainder of *4* is assigned to A |
| \**= | Perform power calculation on operands and assign to the left operand | A \**= B | A is raised to the power of B and *1,000,000* is assigned to A |
| //= | Perform floor division on operands and assign to the left operand | A //= B | A is divided by B and result without remainder (*1*) is assigned to A |

**Example Code:** *SED/Python/assignment.py*

```python
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
```

[Top](#introduction-to-python)

## Conditional Statement
**Make decisions based upon variable values**

Conditional statements allow the programmer to make logic decisions and conditionally execute code based upon that logic.

**Logical Operators**

Assume A = 10 and B = 6 in each of the examples.

| Operator | Description | Example | Effect |
|----------|-------------|---------|--------|
| == | Compare two operands, evaluates to True if they are equal | A == B | Evaluates to *False* |
| != | Compare two operands, evaluates to True if they are not equal | A != B | Evaluates to *True* |
| <> | Compare two operands, evaluates to True if they are not equal | A <> B | Evaluates to *True* |
| > | Compare two operands, evaluates to True if the left operand is greater than the right  | A > B | Evaluates to *True* |
| < | Compare two operands, evaluates to True if the left operand is less than the right  | A < B | Evaluates to *False* |
| >= | Compare two operands, evaluates to True if the left operand is greater than or equal to the right  | A >= B | Evaluates to *True* |
| <= | Compare two operands, evaluates to True if the left operand is less than or equal to the right  | A <= B | Evaluates to *False* |

**Example Code:** *SED/Python/conditional.py*

```python
#!/usr/bin/env python

# Demonstrate if statement

from random import randint

answer = randint(0,9)
question = 'What number am I thinking of? '

print ("Guess a number between 0 and 9")

while True:
   	guess = int(input(question))

    if guess < answer:
   	    print ("Too Low")
    elif guess > answer:
   	    print ("Too High")
   	else:
       	print ("Great Guess!!!")
       	break
```

[Top](#introduction-to-python)

## Loop Statements
**Execute a block of code multiple times**

A *for* loop executes a block of code based upon a counter or range.

A *while* loop executes a block of code based upon a condition.

**Example Code:** *SED/Python/loop.py*

```python
#!/usr/bin/env python

# Demonstrate loops
# For Loop
values = range(1, 10, 2)

print('For Loop: Count up by 2')
for i in values:
    print i

# While Loop
print('While Loop: Count down by 2')
while i > 0:
    print i
    i = i - 2
```
[Top](#introduction-to-python)

## Exception Statement
**Catch and handle exceptions (i.e. errors)**

Exception statements allow the programmer to gracefully handle error conditions.

Exception statements have two parts: try and except. 

* The *try* section contains a block of code that may result in an error condition. 
* The *except* section gracefully handles the error condition.

**Code Example:** *SED/Python/exception.py*
```python
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
```
[Top](#introduction-to-python)

## Import Statement
**Import modules providing reusable functions and classes**

Import allows the programmer to re-use previously written code external to the program. It allows programmers to leverage application programming interfaces (API) written by others to interact with complex services without being concerned with the implementation details.

**Example Code:** *SED/Python/conditional.py*

```python
#!/usr/bin/env python

# Demonstrate if statement

from random import randint

answer = randint(0,9)
question = 'What number am I thinking of? '

print ("Guess a number between 0 and 9")

while True:
   	guess = int(input(question))

    if guess < answer:
   	    print ("Too Low")
    elif guess > answer:
   	    print ("Too High")
   	else:
       	print ("Great Guess!!!")
       	break
```
[Top](#introduction-to-python)

## Function Statement
**Organize code into sub-routines**
* **Frequently used code**
* **Abstract concepts**

Functions allow the programmer to re-use code within the program. It allows programmers to abstract implementation details into discrete routines. Functions can significantly improve code readability.

**Example Code:** *SED/Python/function.py*

```python
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
```

[Top](#introduction-to-python)

## Python Exercise
1. Open a terminal session
2. Change to the Python Source directory
```bash
cd src/SED/Python
```
3. Select a code sample to modify
4. Open the code sample with the *nano* editor
```bash
nano conditional.py
```
5. Each member of the team, do one or more of the following:
	1. Change code logic
	2. Modify variables to change program execution
	3. Move a code block to a function
	4. Add comments to the code to describe your changes
7. Execute!!!
```bash
conditional.py
```

[Top](#introduction-to-python)