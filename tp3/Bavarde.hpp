#ifndef BAVARDE_HPP
#define BAVARDE_HPP


class Bavarde {

    int _elt;
    public :
       

        Bavarde();
        Bavarde(int );
        ~Bavarde();

        void fonction(Bavarde );
        int getElt() const;
        void setElt(int );
        void afficher() const;

  
};

class Couple{

    Bavarde _b1;
    Bavarde _b2;

    public:
        Couple();
        Couple(Bavarde ,Bavarde);

};

class Famille {

    Bavarde *_b;

    public :
        Famille();
        Famille(int );
        ~Famille();
        Bavarde& getFamille(int indice) const;



};
extern int TAILLE;


#endif
