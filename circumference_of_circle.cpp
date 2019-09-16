// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: September 2019
// This program calculates the circumfrence of a circle
//    with user input

#include <iostream>

int main() {
    // this function calculates circumfrence of a circle
    const double TAU = 6.28;
    int radius;
    double circumfrence;
    // input
    std::cout << "Enter radius of circle (mm): ";
    std::cin >> radius;
    // process
    circumfrence = TAU*radius;
    // output
    std::cout << "" << std::endl;
    std::cout << "Circumfrence is "<< circumfrence << " mm^2" << std::endl;
}
