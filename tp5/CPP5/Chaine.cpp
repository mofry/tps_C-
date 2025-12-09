#include "Chaine.hpp"
#include <cstring>
#include <iostream>


//Constructeurs & Destructeurs ///////
Chaine::Chaine() : _capacite(-1), _tab(nullptr) {

}

Chaine::Chaine(const char * inCS ) : Chaine() {
    
    _capacite = strlen(inCS);
    _tab = (char *) malloc(sizeof(char ) * _capacite);
    strcpy(_tab,inCS);
}

Chaine::Chaine(int capa) : _capacite(capa){

    _tab = (char *) malloc(sizeof(char )* _capacite);
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