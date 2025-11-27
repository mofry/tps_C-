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

    Bavarde *b;

    public :
        Famille();
        ~Famille();


};



#endif
