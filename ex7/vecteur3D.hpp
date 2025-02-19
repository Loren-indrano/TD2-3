#ifndef VECTEUR3D_HPP
#define VECTEUR3D_HPP

using namespace std; 


class Vecteur3D {
    private:
        double x,y,z;
    public:
        void affiche();
        void affiche(const char*string);

        int abscisse();
        int ordonnee();
        int cote();

        //on peut aussi provoquer la transformation de double vers int 
        int fixer_abscisse(int nouvelle_abscisse);
        int fixer_ordonnee(int nouvelle_ordonnee);
        int ficer_cote(int nouvelle_ordonnee);
        bool coincide(Vecteur3D v);

        double produit_scalaire(Vecteur3D& v);
};

#endif