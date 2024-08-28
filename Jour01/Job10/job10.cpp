#include <iostream>
#include <stdexcept>

int trouverMin(int **tableau, int taille) {
    if (taille <= 0) {
        throw std::invalid_argument("La taille du tableau doit être positive.");
    }

    // Initialiser le minimum avec la première valeur pointée
    int min = **tableau;

    // Parcourir le tableau de pointeurs à partir du deuxième pointeur
    for (int i = 1; i < taille; ++i) {
        if (**(tableau + i) < min) {
            min = **(tableau + i);
        }
    }

    return min;
}

int main() {
    // Initialisation des entiers
    int a = 5;
    int b = 2;
    int c = 9;
    int d = 1;
    int e = 7;

    // Création d'un tableau de pointeurs vers les entiers
    int *tableau[] = {&a, &b, &c, &d, &e};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    try {
        int min = trouverMin(tableau, taille);
        std::cout << "Le plus petit élément est : " << min << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}