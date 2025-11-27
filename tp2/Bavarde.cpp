#include <iostream>
#include "Bavarde.hpp"

/*class Bavarde {

    Bavarde(int );
    ~Bavarde();
  
} bizarre(1);
*/

Bavarde::Bavarde(int elt) : _elt(0) {
  _elt=elt;
  std::cout<<"Construction de "<< elt << std::endl;
}

Bavarde::~Bavarde(){
  std::cout<<"Tais toi  "<< _elt << std::endl;
}

int Bavarde::getElt() const{
  return _elt;
}

Bavarde bizarre(1);
Bavarde globale(2);

void Bavarde::fonction(Bavarde b) {
  std::cout << "code de la fonction"<<std::endl;
}

