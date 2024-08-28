#include <iostream>
#include <cmath>


int getNumberOfDigits(int number) {
    int numberOfDigits = 0;

    while (number != 0) {
        number /= 10;
        numberOfDigits++;
    }

    return numberOfDigits;
}


int main() {
    std::cout << "Veuillez donner un nombre entier positif: ";

    int inputNumber;
    std::cin >> inputNumber;


    int outputNumber = 0;
    int i = getNumberOfDigits(inputNumber);
    while (i > 0) {
        outputNumber += inputNumber % 10 * (int) std::pow(10, i - 1);
        inputNumber /= 10;
        i--;
    };

    std:: cout << outputNumber << '\n';

    return 0;
}