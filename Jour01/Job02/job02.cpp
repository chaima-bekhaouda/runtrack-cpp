#include <iostream>


int main() {
    int x;
    int y;

    std::cout << "Veuillez donner un premier nombre: ";
    std::cin >> x;

    std::cout << "Veuillez donner un deuxieme nombre: ";
    std::cin >> y;

    std::cout << x << " x " << y << " = " << x * y << '\n';

    return 0;
}