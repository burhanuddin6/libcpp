// header file for input.cpp

#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <iterator>

// take input from file and return a vector of strings
std::vector<std::string> inputFromFile(const std::string &filename);

// take vector of strings and return vector of vector of custom type
template <typename T>
std::vector<std::vector<T>> inputVector(const std::vector<std::string> &input, const std::string &delimiter = " ");

#endif