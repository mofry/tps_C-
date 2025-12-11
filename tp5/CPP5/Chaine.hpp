#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>

class Chaine  {

    int _capacite;
    char *_tab;


    public : 
        Chaine();
        Chaine(const char * inCS );
        Chaine(int ); //constructeur avec capacité
        Chaine(const Chaine&);
        ~Chaine();

        int getCapacite() const;
       const char * c_str() const;
       void afficher(std::ostream& ) const;
       void afficherParReference(Chaine);





};

#endif
