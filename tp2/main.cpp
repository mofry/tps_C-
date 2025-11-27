// Fichier Point.cpp

#include <iostream>  // Inclusion d'un fichier standard
#include "Point.hpp" // Inclusion d'un fichier du répertoire courant
#include "Bavarde.hpp"

/*int main(int, char**) {

    Point p{5,5};

    Point *p1 = new Point(5,5);
    
    std::cout<<"Point "<<Point::getCompteur()<<"("<<p.getX()<<","<<p.getY()<<")"<<std::endl;
   
    p.deplacerVers(99,99);

    std::cout<<"Position finale"<<"("<<p.getX()<<","<<p.getY()<<")"<<std::endl;

    
    
    
    
    return 0;
}*/

int main(int, char **) {
  Bavarde b1(3);
  std::cout << Bavarde(0).getElt() << std::endl; //Bavarde(0) est un constructeur temporaire
 //il est détruiit juste après qu'il soit créé
  Bavarde b2(4);
  Bavarde * p = new Bavarde(5);
  //b1.fonction(b1); //la fonction est passé par valeur (copie).
                    //lz compilo appelle donc un constrtu

  delete p;

   

  return 0;
} 