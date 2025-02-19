#include <iostream>
#include "Personne.hpp"

using namespace std;

// Constructeur par défaut
Personne::Personne() : Nom("INDRANO"), Prenom("Loren"), Age(21) {
    cout << "Construction d'une personne par défaut" << endl;
}

// Constructeur avec paramètres
Personne::Personne(string nom, string prenom, int age) : Nom(nom), Prenom(prenom), Age(age) {
    cout << "Construction d'une personne avec paramètres" << endl;
}

// Constructeur de copie
Personne::Personne(const Personne& other) : Nom(other.Nom), Prenom(other.Prenom), Age(other.Age) {
    cout << "Construction par copie d'une personne" << endl;
}

// Destructeur
Personne::~Personne() {
    cout << "Destruction de la personne : " << Nom << " " << Prenom << endl;
}

// Méthode d'affichage
void Personne::afficher()  {
    cout << "Nom : " << Nom << ", Prénom : " << Prenom << ", Âge : " << Age << endl;
}
