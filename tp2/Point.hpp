#ifndef POINT_HPP
#define POINT_HPP


class Point {

    int _x = 0;  //c++ n'initialise pas les attributs comme en java
    int _y = 0;
    static int _compteur;

    public:

        Point();
        Point(int, int);
        int getX() const;
        int getY() const;
        void setX(int );
        void setY(int y);
        void deplacerDe(int , int);
        void deplacerVers(int, int);
        static int getCompteur();

};

#endif