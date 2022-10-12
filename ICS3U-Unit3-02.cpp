// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : September 2022
// ICS3U-Unit2-04.cpp File, learning pseudo-code in C++.

#include <iomanip>
#include <iostream>

int main() {
    // creating variables
    const int NUMBER = 5;
    int guessNumber;

    // input
    std::cout << "Guess the number from 0 to 9: ";
    std::cin >> guessNumber;

    // process and output
    if (NUMBER == guessNumber){
        std::cout << "\nYou guessed right.";
    }
    if (NUMBER != guessNumber){
        std::cout << "\nYou guessed wrong, try again.";
    }

    std::cout << "\n\n\nDone.\n";
}
