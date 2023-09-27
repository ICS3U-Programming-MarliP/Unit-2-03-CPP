// Copyright (c) 2023 Marli Peters
// Created by: Marli Peters
// Date: Sep. 27, 2023
// This program asks the user for the radius and then
// displays the circumference using tau.
#include <iostream>

int main() {
    // declare constants
    const float TAU = 6.28;

    // declare variables
    float radius, circumference;

    // get the radius from the user
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;

    // calculate the circumference using tau
    circumference = TAU * radius;

    // display the circumference to the user
    std::cout << "\n";
    std::cout << "Circumference = " << circumference << " cm" << std::endl;
}
