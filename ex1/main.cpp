#include <iostream>
#include "Personne.hpp"

using namespace std;


int main() {
    // Test du constructeur par défaut
    cout << "Création d'une personne par défaut : " << endl;
    Personne personne1;
    personne1.afficher();
    cout << endl;

    // Test du constructeur avec paramètres
    cout << "Création d'une personne avec des paramètres : " << endl;
    Personne personne2("Dupont", "Marie", 25);
    personne2.afficher();
    cout << endl;

    // Test du constructeur de copie
    cout << "Création d'une personne par copie : " << endl;
    Personne personne3(personne2);
    personne3.afficher();
    cout << endl;

    // Modification des attributs via les setters
    cout << "Modification des informations de la première personne : " << endl;
    personne1.setNom("Durand");
    personne1.setPrenom("Paul");
    personne1.setAge(30);
    personne1.afficher();
    cout << endl;

    cout << "Fin du programme. Les destructeurs seront appelés automatiquement." << endl;

    return 0;
}
