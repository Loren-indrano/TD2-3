#ifndef PERSONNE_H
 #define PERSONNE_H
 #include <string>
 #include <iostream>

 using namespace std;

class Personne{
    private:
        string Nom;
        string Prenom;
        int Age;
    public: 
        Personne();
        Personne(string nom, string prenom, int age);
        Personne(const Personne& other);

        ~Personne();

        void afficher();

        string getNom() const { return Nom; }
        string getPrenom() const { return Prenom; }
        int getAge() const { return Age; }

        // Setters
        void setNom(string nom) { Nom = nom; }
        void setPrenom(string prenom) { Prenom = prenom; }
        void setAge(int age) { Age = age; }

};

#endif 
