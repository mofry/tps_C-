#include "musique.hpp"


Personne::Personne() {}

Personne::Personne(std::string nom, std::string prenom) : _nom(nom) , _prenom(prenom){

}
Personne::~Personne(){}

std::string Personne::getNom() const {
    return _nom;
}


std::string Personne::getPrenom() const {
    return _prenom;
}

void Personne::setNom(std::string nom) {
    _nom = nom;
}


void Personne::setPrenom(std::string prenom) {
    _prenom = prenom;
}

void Personne::sePresenter(std::ostream& os) const {
     os << "je m'appelle " << _prenom.c_str() << " "<<_nom.c_str() <<".";
}   

std::ostream& operator<<(std::ostream& os,Personne& p) {
    p.sePresenter(os);
    return os;
}


/////////////////////////
///Instrument////////
////////////////////


int Instrument::_compteur = 0;
Instrument::Instrument() : _identifiant(++_compteur) ,_fonctionnel(true) {
}

Instrument::Instrument(std::string nom) : Instrument() {_nom =nom;}


int Instrument::getIdentifiant() const {
    return _identifiant;
}

int Instrument::getCompteur() {
    return _compteur;
}

bool Instrument::estFonctionnel() const {
    return _fonctionnel;
}


std::string Instrument::getNom() const {return _nom; }

void Instrument::setIdentifiant(int id) {
    _identifiant = id;
}
void Instrument::setFonctionnel(bool b) {
    _fonctionnel= b;
}

void Instrument::setNom(std::string nom) {
    _nom = nom;
}












