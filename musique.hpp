#ifndef musique__hpp
#define musique__hpp

#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>



class Personne {
    std::string _nom;
    std::string _prenom;

    class ImpossibleException : public std::exception {
        public :
            const char * what() const noexcept override{
                return "operation impossible";
            }
    };

    public : 
        Personne();
        Personne(std::string, std::string);
        ~Personne();

        std::string getNom() const;
        std::string getPrenom() const;

        void setNom(std::string);
        void setPrenom(std::string);

        void sePresenter(std::ostream&) const;

};


class partition {

};

class Instrument {

    static int _compteur;
    int _identifiant;
    bool _fonctionnel;
    std::string _nom;

    public :
        Instrument();
        Instrument(std::string);
        ~Instrument();

        int getIdentifiant() const;
        static int getCompteur();
        bool estFonctionnel() const;
        std::string getNom() const;

        void setIdentifiant(int );
        void setFonctionnel(bool );
        void setNom(std::string );

};








#endif
