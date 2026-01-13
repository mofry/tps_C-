#include <iostream>


class Mere {

    std::string _nom;
    

};


class Pere {

};


class Enfant : public Mere, public Pere {
   // héritage de tous les attributs et méthodes usuels
};