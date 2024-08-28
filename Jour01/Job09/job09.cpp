#include <iostream>

int trouverMin(int *tableau, int taille) {
    if (taille <= 0) {
        throw std::invalid_argument("La taille du tableau doit être positive.");
    }

    // Initialisation du minimum avec le premier élément du tableau
    int min = *tableau;

    // Parcourir le tableau à partir du deuxième élément
    for (int i = 1; i < taille; ++i) {
        if (*(tableau + i) < min) {
            min = *(tableau + i);
        }
    }

    return min;
}

int main() {
    int tableau[] = {5, 2, 9, 1, 7};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    try {
        int min = trouverMin(tableau, taille);
        std::cout << "Le plus petit élément est : " << min << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
