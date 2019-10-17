// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Oct 2019
// This is program finds out if grandchild is dateable

#include <iostream>
#include <string>

main() {
    // This will calculate grandchild compatibility

    // variables
    std::string money;
    std::string beauty;

    // Welcome statement
    std::cout << "Let's find out if you can date my grandchild." << std::endl;
    std::cout << "Press Enter to continue." << std::endl;
    std::cin.ignore();

    // input
    std::cout << "Do you possess large amounts of money? (y/n)" << std::endl;
    std::cin >> money;
    std::cout << "Do you possess beautiful? (y/n)" << std::endl;
    std::cin >> beauty;

    // process & output
    if (money == "y" && beauty == "y") {
        // output
        std::cout << "\nYou are eligible to date my grandchild.";
    } else {
        std::cout << "\nYou are not eligible to date my grandchild.";
    }
}
