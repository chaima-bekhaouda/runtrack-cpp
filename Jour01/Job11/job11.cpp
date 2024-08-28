#include <iostream>

// Fonction pour échanger les valeurs de deux entiers
void swapValues(int &a, int &b) {
    int temp = a; // Stocker la valeur de a dans une variable temporaire
    a = b;        // Affecter la valeur de b à a
    b = temp;     // Affecter la valeur temporaire à b
}

int main() {
    int x = 10;
    int y = 20;

    std::cout << "Avant l'échange : x = " << x << ", y = " << y << std::endl;

    swapValues(x, y); // Appeler la fonction pour échanger les valeurs

    std::cout << "Après l'échange : x = " << x << ", y = " << y << std::endl;

    return 0;
}
