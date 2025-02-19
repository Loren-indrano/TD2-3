#include <iostream>
#include "pile_entier.hpp"

using namespace std;

int main() {
    cout << "Test du constructeur avec taille spécifique (10):" << endl;
    pile_entier pile1(10);
    
    cout << "\nEmpilement de 5, 10, 15:" << endl;
    pile1.empile(5);
    pile1.empile(10);
    pile1.empile(15);
    pile1.afficher();

    cout << "\nTest de la fonction pleine() :" << endl;
    cout << (pile1.pleine() ? "Pile pleine" : "Pile non pleine") << endl;

    cout << "\nDépilement d'un élément :" << endl;
    cout << "Valeur dépilée : " << pile1.depile() << endl;
    pile1.afficher();

    cout << "\nTest du constructeur de copie :" << endl;
    pile_entier pile2 = pile1;
    cout << "Affichage de pile2 (copie de pile1) :" << endl;
    pile2.afficher();

    cout << "\nDépilement de pile2, pile1 doit rester inchangée :" << endl;
    pile2.depile();
    pile2.afficher();
    cout << "Affichage de pile1 après dépilement de pile2 :" << endl;
    pile1.afficher();

    cout << "\nVidage complet de pile1 :" << endl;
    while (!pile1.vide()) {
        cout << "Valeur dépilée : " << pile1.depile() << endl;
    }
    pile1.afficher();
    cout << (pile1.vide() ? "La pile est bien vide." : "Erreur : la pile devrait être vide.") << endl;

    cout << "\nTest du constructeur par défaut (taille 20) :" << endl;
    pile_entier pile3;
    pile3.afficher();

    cout << "\nEmpilement dans pile3:" << endl;
    for (int i = 0; i < 5; i++) {
        pile3.empile(i * 10);
    }
    pile3.afficher();

    cout << "\nDestruction des piles (automatique à la fin du programme)." << endl;
    return 0;
}
