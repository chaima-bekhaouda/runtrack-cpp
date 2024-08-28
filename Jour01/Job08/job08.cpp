#include <iostream>


bool isLeapYear(int year) {
    if (year % 4 == 0 && year % 100 != 0) {
        return true;
    }

    if (year % 400 == 0) {
        return true;
    }

    return false;
}


int main() {
    int year;
    std::cout << "Donnez une annee: ";
    std::cin >> year;

    if (isLeapYear(year) == true) {
        std::cout << year << " est une annee bissextile\n";
    } else {
        std::cout << year << " n'est pas une annee bissextile\n";
    };

    return 0;
}