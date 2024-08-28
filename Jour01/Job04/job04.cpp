#include <iostream>
#include <string>


int main() {
    int num;
    std::cout << "Veuillez donner un nombre entier: ";
    std::cin >> num;

    std::string parity;
    num % 2 == 0 ? parity = "pair" : parity = "impair";
    std::cout << num << " est " << parity << '\n';

    return 0;
}