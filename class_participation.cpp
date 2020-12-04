// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on December 2020
// This program calculates the attendance and decides if
//       a student is eligible to take the exam

#include <iostream>

int main() {
    // this function calculates attendance and compares to minimum required

    // Variable declarations
    double num_classes_held;
    double num_classes_attend;
    double attendance;

    // input
    std::cout << "This program decides if you can partake in the exam."
              << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the number of classes held: ";
    std::cin >> num_classes_held;
    std::cout << "Enter the number of classes you attended: ";
    std::cin >> num_classes_attend;
    std::cout << "" << std::endl;

    // process

    // calculating attendance
    attendance = (num_classes_attend / num_classes_held) * 100;

    // comparing attendance to minimum requirement
    if (attendance >= 75) {
        // output
        std::cout << "Your attendance is " << attendance << "%" << std::endl;
        std::cout << "You are allowed to take the exam, good luck!"
                  << std::endl;
    } else if (attendance < 75) {
        // output
        std::cout << "Your attendance is " << attendance << "%" << std::endl;
        std::cout << "You cannot take the exam, better luck next time!"
                  << std::endl;
    }
}
