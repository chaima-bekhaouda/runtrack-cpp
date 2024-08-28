#include <iostream>

// Fonction constexpr pour calculer le N-ième terme de la suite de Fibonacci
constexpr int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    constexpr int N = 10; // Définir la position souhaitée dans la suite
    std::cout << "Le terme " << N << " de la suite de Fibonacci est : " << fibonacci(N) << std::endl;

    return 0;
}
