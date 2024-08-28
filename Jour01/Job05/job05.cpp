#include <iostream>


int main() {
    int m;
    int n;

    std::cout << "Veuillez donner un premier nombre m: ";
    std::cin >> m;

    std::cout << "Veuillez donner un deuxieme nombre n: ";
    std::cin >> n;

    std::cout << "m = " << m << '\n' << "n = " << n << '\n';


    int swap = m;
    m = n;
    n = swap;

    std::cout << "\nm = " << m << '\n' << "n = " << n << '\n';

    return 0;
}