#include <iostream>
#include "pile_entier.hpp"

using namespace std; 

pile_entier::pile_entier(int n){
    len = n;
    sommet = -1;
    pile = new int[len];
    if (pile != NULL){
        pile[0] = '\0';
    }else{
        cout<<"plus de mémoire"<<endl;
        exit(1);
    }
} 

pile_entier::pile_entier(){
    len = 20;
    sommet = -1;
    pile = new int[len];
    if (pile != NULL){
        pile[0] = '\0';
    }else{
        cout<<"plus de mémoire"<<endl;
        exit(1);
    }
}

pile_entier::pile_entier(const pile_entier& p){
    len = p.len;
    sommet = p.sommet;
    pile = new int[len];
    if(pile != NULL){
        pile[0] = '\0';
    }else{
        cout<<"plus de mémoire"<<endl;
        exit(1);
    }  
    for (int i = 0; i <= sommet; ++i) {
        pile[i] = p.pile[i];
    }

}


pile_entier::~pile_entier(){
    delete[] pile;
    cout<<"destruction de la pile: "<<endl;

}


void pile_entier::empile(int p) {
    if (pleine()) {
        cout << "Erreur : La pile est pleine, impossible d'empiler " << p << "." << endl;
    } else {
        sommet++;
        pile[sommet] = p;
    }
}


int pile_entier::depile(){
    int valeur = -1; // Valeur par défaut en cas d'erreur
    if (vide()==1) {
        std::cerr << "Erreur : La pile est vide.\n";
    } else {
        valeur = pile[sommet];
        sommet--;
    }
    return valeur;
}


int pile_entier::pleine(){
    int est_pleine = 0;
    if (sommet == len - 1) {
        est_pleine = 1;
    }
    return est_pleine;
}

int pile_entier::vide(){
    if (sommet ==-1){
        return 1;
    }
    return 0;
}

void pile_entier::afficher() {
    if (vide()) {
        cout << "La pile est vide." << endl;
        return;
    }
    cout << "Pile: ";
    for (int i = 0; i <= sommet; i++) {
        cout << pile[i] << " ";
    }
    cout << endl;
}
