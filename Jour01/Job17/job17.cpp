#include <iostream>
#include <cstdlib> // Pour rand() et srand()
#include <ctime>   // Pour time()

// Déclaration de l'énumération pour les spécialités
enum Specialite {
    IA,
    Web,
    Logiciel,
    SystèmeImmersif,
    Cybersécurité,
    NombreSpecialites // Nombre total de spécialités
};

// Fonction pour afficher le nom et le nombre d’étudiants d'une spécialité
void afficherSpecialite(Specialite sp, int nombreEtudiants) {
    const char* nomsSpecialites[NombreSpecialites] = {
        "Intelligence Artificielle",
        "Web",
        "Logiciel",
        "Système Immersif",
        "Cybersécurité"
    };
    std::cout << nomsSpecialites[sp] << ": " << nombreEtudiants << " étudiants" << std::endl;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr))); // Initialiser le générateur de nombres aléatoires

    int specialites[NombreSpecialites];
    for (int i = 0; i < NombreSpecialites; ++i) {
        specialites[i] = rand() % 55 + 12; // Nombre aléatoire entre 12 et 66
    }

    std::cout << "Spécialités et nombre d'étudiants :" << std::endl;
    for (int i = 0; i < NombreSpecialites; ++i) {
        afficherSpecialite(static_cast<Specialite>(i), specialites[i]);
    }

    return 0;
}
