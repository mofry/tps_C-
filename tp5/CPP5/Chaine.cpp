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
        _capacite = strlen(inCS) + 1; 
    }

    _capacite = strlen(inCS);
    _tab = (char *) malloc(sizeof(char ) * _capacite);
    strcpy(_tab,inCS);
}

Chaine::Chaine(int capa) : _capacite(capa){

    _tab = (char *) malloc(sizeof(char )* _capacite);  
    _tab[0] = 0;
    
}


Chaine::Chaine(const Chaine& source) : Chaine(source._tab){

    

    printf("Constructeur de copie appelé");
}


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
    os<<_tab<<std::endl;
}

