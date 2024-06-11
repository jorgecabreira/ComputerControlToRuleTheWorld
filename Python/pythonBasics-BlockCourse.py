#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue May 21 12:20:59 2024

@author: J Cabrera-Moreno

BlokcCourse
"""

# Entering expressions
2 + 2 = 4
3 * 5 = 15
2 ** 3 = 8

(5 - 1) * ((7 + 1) / (3 - 1)) = 16

# Data types
"Alice" + "Bob" = "ALiceBob"
"Alice" * 5 = "AliceAliceAliceAliceAlice"

#Storing values in variables
spam = 42
spam = "Alice"


# Write your first program
# This program says hello and asks for my name.

print('Hello, world!')
print('What is your name?')    # ask for their name
myName = input()
print('It is good to meet you, ' + myName)
print('The length of your name is:')
print(len(myName))
print('What is your age?')    # ask for their age
myAge = input()
print('You will be ' + str(int(myAge) + 1) + ' in a year.')

