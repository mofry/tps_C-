#include "batiment.hpp"


/////////////
/////ADRESSE///
////////////

Adresse::Adresse() :_nom(nom_zz), _latitude(latitude_zz) , _longitude(longitude_zz)  {}
Adresse::Adresse(string nom , double latitude , double longitude) : _nom(nom), _latitude(latitude) , _longitude(longitude) {}
Adresse::~Adresse() {}

string Adresse::getNom() const{
    return _nom;
}
double Adresse::getLatitude() const {
    return _latitude;
}
double Adresse::getLongitude() const {
    return _longitude;
}

void Adresse::toStream(ostream& os) const {
    os << std::fixed << std::setprecision(4);
    os<<_nom << " ( " << _latitude << " ; "<<_longitude << " )";
}

void Adresse::toStream() const {
    cout << std::fixed << std::setprecision(3);
    cout <<_nom << " ( " << _latitude << " ; "<<_longitude << " )" <<endl;
}

Adresse ADRESSE;



/////////////
/////OUVRIER///
////////////
int Ouvrier::compteur=0;

//Ouvrier::Ouvrier() : id(++compteur), _adresse->(_nom)=nom_zz,_adresse->_latitude=latitude_zz, _adresse->_longitude=longitude_zz {}
Ouvrier::Ouvrier() : _disponible(true),id(++compteur), _adresse(&ADRESSE) {}
Ouvrier::~Ouvrier(){}
Ouvrier::Ouvrier(const Ouvrier& source) :_disponible(source._disponible),id(++compteur)  , _adresse(source._adresse){}

int Ouvrier::getCompteur() {
    return compteur;
}
bool Ouvrier::isDisponible() const {
    return _disponible;
}
int Ouvrier::getId() const {
    return id;
}

void Ouvrier::setDisponible(bool disponible ) {
    _disponible = disponible;
}

void Ouvrier::travailler(ostream& os) const{
    if (_disponible) {

        os << std::fixed << std::setprecision(4);
        os<<"Ouvrier #1 travaille à ISIMA ( "<< latitude_zz << " ; "<<longitude_zz<< " )";
    }
    else {
        throw IndisponibleException();
    }
  

}

void Ouvrier::setChantier(Adresse a) {
    *(_adresse) = a;
}

Adresse& Ouvrier::getChantier() const {
    return *(_adresse);
}


/////////////
/////CHEF///
////////////

Chef::Chef() : Ouvrier() {}
Chef::~Chef(){}

void Chef::ajouter(Ouvrier* ouvrier) {
    ouvriers.push_back(ouvrier);
    Adresse a = this->getChantier();
    std::for_each(ouvriers.begin(),ouvriers.end(),[&a]( Ouvrier* o) {
        o->setChantier(a);
    });
}


