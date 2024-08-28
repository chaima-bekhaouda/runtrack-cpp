#include <iostream>


int main() {
    double prixHorsTaxe;
    std::cout << "Prix hors-taxe d'un kg de carotte: ";
    std::cin >> prixHorsTaxe;

    double kg;
    std::cout << "Combien de kg: ";
    std::cin >> kg;

    double tva;
    std::cout << "Pourcentage TVA: ";
    std::cin >> tva;

    double prixTTC = (prixHorsTaxe * kg) * (1 + (tva / 100));
    std::cout << prixTTC << " EUR\n";

    return 0;
}