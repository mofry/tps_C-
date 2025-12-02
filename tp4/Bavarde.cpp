#include <iostream>
#include "Bavarde.hpp"

/*class Bavarde {

    Bavarde(int );
    ~Bavarde();
  
} bizarre(1);
*/


Bavarde::Bavarde():_elt(0) {};
Bavarde::Bavarde(int elt) : _elt(0) {
  _elt=elt;
  std::cout<<"Bavard "<< _elt << std::endl;
}

//tests
void Bavarde::test1(Bavarde ) const {
  std::cout << "appel de fonction avec parametre objet et copie";
}
Bavarde Bavarde::test2a() const{
  Bavarde b; // creation d'un objet local
  std::cout << "appel de fonction avec retour";
  return b;
} // plus de copie - ZZ3




Bavarde::~Bavarde(){
  std::cout<<"Tais toi  "<< _elt << std::endl;
}

int Bavarde::getElt() const{
  return _elt;
}



void Bavarde::fonction(Bavarde ) {
  std::cout << "code de la fonction"<<std::endl;
}

void Bavarde::afficher() const {

  std::cout<<"Affichage de "<<_elt<<std::endl;
}



Couple::Couple(Bavarde b1, Bavarde b2):_b1(b1), _b2(b2) {
    std::cout<<"("<< b1.getElt()<<","<< b2.getElt()<<")"<<std::endl;
} 

