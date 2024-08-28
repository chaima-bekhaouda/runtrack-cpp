#include <iostream>
#include <cstdlib> // Pour malloc et free

// Fonction pour ajouter un élément au tableau
void addElement(int*& tableau, int& tailleActuelle, int nouvelElement) {
    int* nouveauTableau = static_cast<int*>(std::malloc((tailleActuelle + 1) * sizeof(int)));
    if (nouveauTableau == nullptr) {
        std::cerr << "Erreur d'allocation mémoire." << std::endl;
        exit(1);
    }

    for (int i = 0; i < tailleActuelle; ++i) {
        nouveauTableau[i] = tableau[i];
    }
    nouveauTableau[tailleActuelle] = nouvelElement;
    std::free(tableau);
    tableau = nouveauTableau;
    ++tailleActuelle;
}

// Fonction pour afficher les éléments du tableau
void showTable(const int* tableau, int taille) {
    for (int i = 0; i < taille; ++i) {
        std::cout << tableau[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int tailleInitiale = 5;
    int* tableau = static_cast<int*>(std::malloc(tailleInitiale * sizeof(int)));
    if (tableau == nullptr) {
        std::cerr << "Erreur d'allocation mémoire." << std::endl;
        return 1;
    }

    // Initialiser le tableau avec des valeurs
    for (int i = 0; i < tailleInitiale; ++i) {
        tableau[i] = i + 1;
    }

    // Ajouter de nouveaux éléments
    int tailleActuelle = tailleInitiale;
    addElement(tableau, tailleActuelle, 6);
    addElement(tableau, tailleActuelle, 7);

    std::cout << "Tableau après ajout d'éléments : ";
    showTable(tableau, tailleActuelle);

    std::free(tableau); // Libérer la mémoire allouée

    return 0;
}
