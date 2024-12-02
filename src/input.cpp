// src file for input functions
#ifndef INPUT_CPP
#define INPUT_CPP

#include "input.h"

std::vector<std::string> inputFromFile(const std::string &filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file: " << filename << std::endl;
        exit(1);
    }
    std::vector<std::string> input;
    std::string line;
    while (std::getline(file, line)) {
        input.push_back(line);
    }
    return input;
}

template <typename T>
std::vector<std::vector<T>> inputVector(const std::vector<std::string>& input, const std::string& delimiter) {
    std::vector<std::vector<T>> output;

    // Loop over each line in the input vector
    for (const auto& line : input) {
        std::vector<T> temp;
        std::string token;
        std::istringstream tokenStream(line);

        // Split the line by the delimiter
        while (std::getline(tokenStream, token, delimiter[0])) {
            std::istringstream tokenToType(token);
            T value;
            tokenToType >> value;  // Convert the string token into type T
            temp.push_back(value);
        }

        // Add the processed vector to the output
        output.push_back(temp);
    }

    return output;
}

// Explicit template instantiations (if needed)
template std::vector<std::vector<int>> inputVector<int>(const std::vector<std::string>&, const std::string&);
template std::vector<std::vector<float>> inputVector<float>(const std::vector<std::string>&, const std::string&);

#endif