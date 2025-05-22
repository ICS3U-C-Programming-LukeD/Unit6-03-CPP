// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Date: May , 2025
//

#include <cstdlib>
// For rand() and srand()

#include <ctime>
// For time()

// adds iostream library
#include <iostream>

// adds string library
#include <array>
#include <string>

int minVal(std::array<int, 10> array) {
    int minValue = 100;
    for (int counter = 0; counter < 10; counter++) {
        if (array[counter] < minValue) {
            minValue = array[counter];
        }
    }
    return minValue;
}

int main() {
    std::array<int, 10> randNumArray;
    // Makes seed random by setting it to time
    srand(time(NULL));
    // Variables for random number and user number
    for (int counter = 0; counter < 10; counter++) {
        randNumArray[counter] = rand() % 101;
        std::cout << randNumArray[counter] << " added to array" << std::endl;
    }
    int minimumValue = minVal(randNumArray);
    std::cout << "The minimum value is " << minimumValue << std::endl;
}
