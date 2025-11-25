// Fichier Point.cpp

#include <iostream>  // Inclusion d'un fichier standard
#include "Point.hpp" // Inclusion d'un fichier du répertoire courant

Point::Point(): _x(5) , _y(0){ 

    std::cout<<"sans arg"<<std::endl;
    _compteur++;

}

Point::Point(int px ,int py): _x(px) , _y(py)
{
    std::cout<<"avec arg"<<std::endl;
    _compteur++;
}

int Point::getX() const{

    //intérêt du return _x
  return _x;
}

void Point::setX(int x) {

    _x = x;

}


int Point::getY() const {
  return _y;
}

void Point::setY(int y){

    _y = y;

}

void Point::deplacerDe(int dx, int dy){

    _x+=dx;
    _y+=dy;
}


void Point::deplacerVers(int vx, int vy){

    setX(vx);
    setY(vy);
}

int Point::getCompteur(){
    return _compteur;
}

int Point::_compteur=0;