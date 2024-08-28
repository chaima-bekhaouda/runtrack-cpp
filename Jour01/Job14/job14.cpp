#include <iostream>
#include <cmath> // Pour std::pow

int main() {
    int N;
    std::cout << "Entrez un entier N : ";
    std::cin >> N;

    if (N < 5) {
        std::cout << "N doit être au moins 5." << std::endl;
        return 1;
    }

    int somme = 0;
    for (int i = 5; i <= N; ++i) {
        somme += std::pow(i, 3); // Calculer le cube de i
    }

    std::cout << "La somme des cubes de 5^3 à " << N << "^3 est : " << somme << std::endl;

    return 0;
}
