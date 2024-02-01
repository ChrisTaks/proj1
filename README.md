# CSCE 311 Project 1: C++ Proficiency Using Linux
## Chris Taks

This program is a simple calculator that takes in arguments from the command line and executes the math involved. It can add, subtract, multiply, and divide. 
Example input: `./calculate 3 + 2 x 7` 
Example output: `17`

## calculator.h
Defines the main methods used in the program. They're extremely simple and not very necessary, but I thought I'd implement the header file anyway to help reintroduce myself back into C++.

## calculator.cc
Holds the contents of the methods defined in the header file. Again, they're very simple (every single one is just one line).

## main.cc
Intro point in the code. takes in the command line arguments, which should be numbers and the operators +, -, x, /. Note instead of '*' the program uses 'x'. 

## makefile
complies the above listed files into the executable named "calculate".