// Copyright 2024 Chris Taks

#include <proj1/calculator.h>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<double> numbers;
  std::vector<std::string> operators;
  // adding the args to their respective vectors
  for (int i = 1; i < argc; ++i) {
    if (IsOperator(argv[i])) {
      operators.push_back(std::string(argv[i]));
      // multiply/divide found. need to do order of operations.
      if (operators.back() == "x" || operators.back() == "/") {
        double a = numbers.back();
        numbers.pop_back();
        if (operators.back() == "x") {
          numbers.push_back(MultiplyNumbers(a, std::stod(argv[i+1])));
        }
        if (operators.back() == "y") {
          numbers.push_back(DivideNumbers(a, std::stod(argv[i+1])));
        }
        ++i;  // iterate past the next variable since it was already used
      }
    } else {
      numbers.push_back(std::stod(argv[i]));
    }
  }
  // next, just add / subtract the remaining numbers
  for (std::string& op : operators) {
    if (op == "+") {
      numbers[0] = AddNumbers(numbers[0], numbers[1]);
      numbers.erase(numbers.begin()+1);
    }
    if (op == "-") {
      numbers[0] = SubtractNumbers(numbers[0], numbers[1]);
      numbers.erase(numbers.begin()+1);
    }
  }
  std::cout << numbers[0] << std::endl;
}
