// Copyright 2024 Chris Taks

#include <proj1/calculator.h>
#include <string>
#include <iostream>

double AddNumbers(double a, double b) {
  return a + b;
}

double SubtractNumbers(double a, double b) {
  return a - b;
}

double MultiplyNumbers(double a, double b) {
  return a * b;
}

double DivideNumbers(double a, double b) {
  return a / b;
}

bool IsOperator(std::string arg) {
  return arg == "+" || arg == "-" || arg == "x" || arg == "/";
}
