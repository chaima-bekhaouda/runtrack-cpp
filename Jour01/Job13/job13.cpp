#include <iostream>

// Fonction constexpr pour calculer le N-ième terme de la suite de Fibonacci
constexpr int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

// Fonction pour afficher les dix premiers termes de la suite de Fibonacci
void afficherFibonacci(int termes) {
    for (int i = 0; i < termes; ++i) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;
}

// Fonction pour vérifier si le nombre de bits à 1 est pair
bool nombreBitsPair(uint32_t nombre) {
    int compteurBits = 0;
    while (nombre) {
        compteurBits += nombre & 1; // Ajouter le bit le plus bas à compteurBits
        nombre >>= 1; // Décaler à droite pour traiter le bit suivant
    }
    return (compteurBits % 2 == 0); // Retourner vrai si le compteur est pair
}

int main() {
    // Affichage des dix premiers termes de la suite de Fibonacci
    std::cout << "Les dix premiers termes de la suite de Fibonacci sont : ";
    afficherFibonacci(10);

    // Test de la fonction nombreBitsPair
    uint32_t testNombre = 29; // Exemple de nombre
    std::cout << "Le nombre de bits à 1 dans " << testNombre << " est ";
    if (nombreBitsPair(testNombre)) {
        std::cout << "pair." << std::endl;
    } else {
        std::cout << "impair." << std::endl;
    }

    return 0;
}
