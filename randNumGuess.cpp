// Created by: Finn Kitor
// Date: October 16th, 2023
// this program checks if the number the user guessed is correct with a correct answer on terminal.

#include <iostream>

int main() {
    // this function checks if the number is incorrect
    const int CORRECT_NUMBER = 6;
    int number;

    // user inputs the number into the terminal
    std::cout << "Enter a number between 0 to 9: ";
    std::cin >> number;
    std::cout << "" << std::endl;

    // Terminal will process the number inputted by the user if it is correct
    if (number > CORRECT_NUMBER) {
        // terminal outputs the number to the user if it is correct or not
        std::cout << "the number is incorrect, please try again!";
    } else {
        std::cout << "the number is correct, good work!";
    }
}