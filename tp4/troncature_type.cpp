#include <iostream>
#include "troncature_type.hpp"


void Mere::afficher() const{
    std::cout << "Mere"<<std::endl;
}


void Fille::afficher() const{
    std::cout << "Fille"<<std::endl ;
}

void afficher1(Mere m) {
   m.afficher();
}

void afficher2(Mere &m) {
   m.afficher();
}

void afficher3(Mere * m) {
   m->afficher();
}
