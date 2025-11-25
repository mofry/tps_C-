// Fichier Point.cpp

#include <iostream>  // Inclusion d'un fichier standard
#include "Point.hpp" // Inclusion d'un fichier du répertoire courant

Point::Point(): x(5) , y(0) { 

    std::cout<<"sans arg"<<std::endl;

}

Point::Point(int px ,int py): x(px) , y(py)
{
    std::cout<<"avec arg"<<std::endl;
}

int Point::getX() const{

    //intérêt du return _x
  return x;
}

void Point::setX(int x) {

    this->x = x;

}


int Point::getY() const {
  return y;
}

void Point::setY(int y){

    this->y = y;

}

void Point::deplacerDe(int dx, int dy){

    x+=dx;
    y+=dy;
}


void Point::deplacerVers(int vx, int vy){

    setX(vx);
    setY(vy);
}