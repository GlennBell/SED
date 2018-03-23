#!/usr/bin/env python

# Demonstrate if statement

from random import randint

answer = randint(0,9)
question = 'What number am I thingking of? '

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


