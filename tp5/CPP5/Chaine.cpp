#include "Chaine.hpp"
#include <cstring>
#include <iostream>


//Constructeurs & Destructeurs ///////
Chaine::Chaine() : _capacite(-1), _tab(nullptr) {

}

Chaine::Chaine(const char * inCS ) : Chaine() {



    if (inCS == nullptr) {
        _capacite = 0; 
    }

    else {
        _capacite = strlen(inCS);
        _tab = (char *) malloc(sizeof(char ) * (_capacite));
        strcpy(_tab,inCS);
    }


    
}

Chaine::Chaine(int capa) : _capacite(capa){

    _tab = (char *) malloc(sizeof(char )* _capacite);  
    _tab[0] = 0;
    
}

Chaine::Chaine(const Chaine& source) : Chaine(source._capacite){

   
    strcpy((*this)._tab,source._tab);

    printf("Constructeur de copie appelé");


    
}


// Chaine::Chaine(const Chaine& source) : Chaine(){

    

//     printf("Constructeur de copie appelé");
// }


Chaine::~Chaine(){
    delete [] _tab;
}
/////////////////////////

int Chaine::getCapacite() const {
    return _capacite;
}

const char * Chaine::c_str() const {

    return _tab;
}

void Chaine::afficher(std::ostream& os) const {
    os<<_tab;
   
}


Chaine& Chaine::operator= (const Chaine& source) {
    if (&source==this) return *this;

    free(_tab);
   this-> _capacite = source._capacite;
    _tab = (char *) malloc(sizeof(char )  * _capacite);
    strcpy(_tab,source._tab);
    

    return *this;

}

void Chaine::afficherParValeur(Chaine chaine) {
    chaine.afficher(std::cout);
}

void Chaine::afficherParReference(Chaine& chaine) {
    chaine.afficher(std::cout);
}

std::ostream& operator<<(std::ostream& os , const Chaine& chaine) {

    chaine.afficher(os);

    return os;


}


char& Chaine::operator[](int i) const {

    return _tab[i];     
}
