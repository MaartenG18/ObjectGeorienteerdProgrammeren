// Opdracht 1.2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double array[3]{}; // initializing an empty array constisting of 3 doubles

    std::cout << "Enter 3 numbers to convert\n";

    // Loop for inputs
    for (int i = 0; i < 3; i++) {
        int temp{};
        std::cin >> temp;
        if (temp < 0) { // checks for negative input and writes an error to cerr
            std::cerr << "Error!!, the input is a negative number";
            return -1;
        }
        array[i] = temp * 39.3700787; // Conversion factor
    }

    std::cout << "The converted numbers are:\n";

    // Loop to show the outputs
    for (auto i : array) {
        std::cout << i << "\n";
    }

    return 0;
}
