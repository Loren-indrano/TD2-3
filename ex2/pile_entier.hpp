#ifndef PILE_HPP
#define PILE_HPP

using namespace std; 

class pile_entier{
    private :
        int *pile;
        int len;
        int sommet;
    public : 
        //constructeur allouant dynamiquement un emplacement de n entiers
        pile_entier(int n);
        //constructeur allouant dynamiquement un emplacement de 20 entiers,
        pile_entier();
        //constructeur copie 
        pile_entier(const pile_entier& pile);

        //destructeur
        ~pile_entier();
        
        // empile l'entier p sur la pile 
        void empile(int p);

        //fournit la valeur de l'entier en haut de la pile et supprime la pile
        int depile();

        //renvoie 1 si la pile est pleine (nb d'entier dans la pile = taille du tableau) et 0 sinon 
        int pleine();

        //renvoie 1 si la pile est vide 
        int vide(); 

        void afficher();

};


#endif