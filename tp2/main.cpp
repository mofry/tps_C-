// Fichier Point.cpp

#include <iostream>  // Inclusion d'un fichier standard
#include "Point.hpp" // Inclusion d'un fichier du répertoire courant

int main(int, char**) {

    Point p{5,5};

    Point *p1 = new Point(5,5);
    
    std::cout<<"Point "<<Point::getCompteur()<<"("<<p.getX()<<","<<p.getY()<<")"<<std::endl;
   
    /*p.deplacerVers(99,99);

    std::cout<<"Position finale"<<"("<<p.getX()<<","<<p.getY()<<")"<<std::endl;*/

    
    
    
    
    return 0;
}