#include <iostream>

#define MAX1 100
static const int MAX2 = 100;

// Impossible de prendre l'adresse de MAX1 car c'est une macro.
// int* p1 = &MAX1; // Erreur : MAX1 n'a pas d'adresse mémoire

// OK : MAX2 a une adresse mémoire
const int* p2 = &MAX2;

void afficherConstantes() {
    std::cout << "MAX1 (macro) : " << MAX1 << std::endl;
    std::cout << "MAX2 (const) : " << MAX2 << std::endl;
    std::cout << "Adresse de MAX2 : " << p2 << ", Valeur : " << *p2 << std::endl;
}