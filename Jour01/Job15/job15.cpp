#include <iostream>

// Fonction pour vérifier si le nombre de bits à 1 est pair
bool estNombreBitsPair(uint32_t nombre) {
    // Compter le nombre de bits à 1
    int compteurBits = 0;
    while (nombre) {
        compteurBits ^= nombre & 1; // XOR avec le bit le plus bas
        nombre >>= 1; // Décaler à droite pour traiter le bit suivant
    }
    return (compteurBits == 0); // Le nombre de bits à 1 est pair si compteurBits est 0
}

int main() {
    uint32_t testNombre = 42; // Exemple de nombre en binaire 101010
    std::cout << "Le nombre de bits à 1 dans " << testNombre << " est ";
    if (estNombreBitsPair(testNombre)) {
        std::cout << "pair." << std::endl;
    } else {
        std::cout << "impair." << std::endl;
    }
    return 0;
}
