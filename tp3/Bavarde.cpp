#include <iostream>
#include <cstdlib>
#include "Bavarde.hpp"

/*class Bavarde {

    Bavarde(int );
    ~Bavarde();
  
} bizarre(1);
*/


Bavarde::Bavarde():_elt(0) {
  std::cout<<"Bavard"<<std::endl;
};
Bavarde::Bavarde(int elt) : _elt(0) {
  _elt=elt;
  std::cout<<"Bavard "<< _elt << std::endl;
}

Bavarde::~Bavarde(){
  std::cout<<"Tais toi  "<< _elt << std::endl;
}

int Bavarde::getElt() const{
  return _elt;
}

void Bavarde::setElt(int elt) {
  _elt = elt;
} 


void Bavarde::fonction(Bavarde ) {
  std::cout << "code de la fonction"<<std::endl;
}

void Bavarde::afficher() const {

  std::cout<<"Affichage de "<<_elt<<std::endl;
}



Couple::Couple() {
  std::cout<<"Couple construit"<<std::endl;
}


Couple::Couple(Bavarde b1, Bavarde b2):_b1(b1), _b2(b2) {
    std::cout<<"("<< b1.getElt()<<","<< b2.getElt()<<")"<<std::endl;
} 

Couple::~Couple() {
  std::cout<<"Destruction"<<std::endl;
}
/////////////////////////////////////////////////////////
///////////////////////////////////////////FAMILLE////////////////////////
/////////////////////////////////////


Famille::Famille() : _b(nullptr) {
}

Famille::Famille(int taille) : _b(nullptr) {
  _b = new Bavarde[taille]; //chaque element du tableau sera construit
  //a ll'aide du constructeur par defaut
  
}

Famille::~Famille() {
  delete [] _b;
}

Bavarde& Famille::getFamille(int indice) const{

  return _b[indice];

}  //c'est important de renvoyer une référence car si on veut parcourir la liste et modifier
//des valeurs il faut le faire sur la reference et non sur la copie

void Famille::modifierFamille(int indice , Bavarde newValue) {
  getFamille(indice) = newValue;
}

int TAILLE = 5;

/////////////////////////////////////////////////////////////////////////////////////////////
Mere::Mere() {

  //std::cout<<"Mere  sans argument"<<std::endl;
  _cmp++;
}

Mere::Mere(std::string nom) : _nom(nom) {

 // std::cout<<"Mere avec argument"<<std::endl;
  _cmp++;
}

Mere::~Mere() {
 // std::cout<<"destructeur Mere"<<std::endl;
}

int Mere::getCompteur(){
  return _cmp;
}

std::string Mere::getName() const {
  return _nom;
}

void Mere::afficher() const {
  std::cout<<"Objet de classe Mere" << std::endl;
}

int Mere::_cmp = 0;

/////////////////////////////////////////////////////////////////

//Fille

Fille::Fille() : Mere(){
  std::cout<< "Fille" << getCompteur()<<std::endl;
  //std::cout<< "compteur = " << getCompteur() <<std::endl;
}
Fille::Fille(std::string nom) : Mere(nom) {
  std::cout<< "Fille" <<getCompteur()<<std::endl;
  //std::cout<< "compteur = " << getCompteur() <<std::endl;
}

void Fille::afficher() const{
  std::cout<<"Objet de classe Fille"<<std::endl;
}





Fille::~Fille() {
  std::cout<< "Destructeur Fille" <<std::endl;
  
}


/*void Fille::setCouleur(std::string color) {
  _couleur_pref = color;
}*/







