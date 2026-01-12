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
        ~Couple();

};

class Famille {

    Bavarde *_b;

    public :
        Famille();
        Famille(int );
        ~Famille();
        Bavarde& getFamille(int indice) const;
        void modifierFamille(int indice,Bavarde );



};







class Mere {
    
    static int _cmp;
    std::string _nom;

    public :
        Mere();
        Mere(std::string);
        virtual ~Mere();
        static int getCompteur();
        std::string getName() const;
        void virtual afficher();
};

class Fille : public Mere {

    std::string _couleur_pref;

    public: 
        Fille();
        Fille(std::string nom );

        virtual ~Fille();

        void afficher() override;

        



};
extern int TAILLE;


#endif
