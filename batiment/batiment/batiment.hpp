#ifndef batiment__hpp
#define batiment__hpp

#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

char  const * const nom_zz = "ISIMA";
const double latitude_zz   = 45.75919091728384;
const double longitude_zz  = 3.1103735526660263;

using namespace std;


class Adresse {

    string _nom;
    double _latitude;
    double _longitude;
    public :
        Adresse();
        Adresse(string , double , double);
        virtual ~Adresse();

        string getNom() const;
        double getLatitude() const;
        double getLongitude() const;

        void toStream(ostream& ) const;
        void toStream() const ;



};
extern Adresse ADRESSE;





class IndisponibleException : public exception {
    const char* what() const noexcept override {
        return "probleme";
    }
};
/////////////
/////OUVRIER///
////////////



class Ouvrier {
    static int compteur;
    bool _disponible;
    int id;
    Adresse *_adresse;
    
    public :
        friend class Adresse;
        Ouvrier();
        virtual ~Ouvrier();
        Ouvrier(const Ouvrier&);

        static int getCompteur();
        bool isDisponible() const;
        int getId() const;
        Adresse& getChantier() const;

        void setDisponible(bool );
        void setChantier(Adresse );

        void travailler(ostream&) const;




};

/////////////
/////CHEF///
////////////

class Chef : public Ouvrier {

    vector<Ouvrier*> ouvriers;

    public :
        Chef();
        virtual ~Chef();

        void ajouter(Ouvrier*) ;


};



#endif
