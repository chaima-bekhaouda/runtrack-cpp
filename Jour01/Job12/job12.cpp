#include <iostream>

// Fonction pour doubler les éléments du tableau et renvoyer la somme
int doubleArray(int *tableau, int taille) {
    int somme = 0;
    for (int i = 0; i < taille; ++i) {
        *(tableau + i) *= 2; // Doubler la valeur à l'emplacement pointé
        somme += *(tableau + i); // Ajouter la valeur doublée à la somme
    }
    return somme;
}

// Fonction pour afficher les éléments du tableau
void printArray(int *tableau, int taille) {
    for (int i = 0; i < taille; ++i) {
        std::cout << *(tableau + i) << " "; // Afficher chaque élément
    }
    std::cout << std::endl;
}

int main() {
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    int somme = doubleArray(tableau, taille);
    std::cout << "La somme des éléments doublés est : " << somme << std::endl;

    std::cout << "Les éléments doublés sont : ";
    printArray(tableau, taille);

    return 0;
}
