#include <iostream>
#include <cstring> // Pour std::strcmp

// Fonction pour échanger deux chaînes de caractères
void echanger(char** a, char** b) {
    char* temp = *a;
    *a = *b;
    *b = temp;
}

// Fonction pour trier un tableau de chaînes de caractères
void MySortString(char* tableau[], int taille) {
    for (int i = 0; i < taille - 1; ++i) {
        for (int j = 0; j < taille - 1 - i; ++j) {
            if (std::strcmp(tableau[j], tableau[j + 1]) > 0) {
                echanger(&tableau[j], &tableau[j + 1]);
            }
        }
    }
}

void afficherTableau(char* tableau[], int taille) {
    for (int i = 0; i < taille; ++i) {
        std::cout << tableau[i] << std::endl;
    }
}

int main() {
    const int taille = 5;
    char* tableau[taille] = {"Banane", "Pomme", "Abricot", "Orange", "Fraise"};

    MySortString(tableau, taille);
    std::cout << "Tableau trié :" << std::endl;
    afficherTableau(tableau, taille);

    return 0;
}
