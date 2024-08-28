#include <iostream>


int main() {
    std::cout << "Donnez cinq entiers\n";

    int a;
    std::cin >> a;

    for (int i = 0; i < 4; i++) {
        int b;
        std::cin >> b;
        a += b;
    };

    std::cout << "La moyenne de ces nombres est " << a / 5 << '\n';

    return 0;
}