#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>

// class Chaine  {

//     int _capacite;
//     char *_tab;


//     public : 
//         Chaine();
//         Chaine(const char * inCS );
//         Chaine(int ); //constructeur avec capacité
//         Chaine(const Chaine&);
//         ~Chaine();

//         int getCapacite() const;
//        const char * c_str() const;
//        void afficher(std::ostream& ) const;
//        void afficherParValeur(Chaine);
//        void afficherParReference(Chaine&);

//        Chaine& operator=(const Chaine& source);
//        char& operator[](int ) const;

    
       
    

// };



// std::ostream& operator<< (std::ostream&,const Chaine&);






class Vecteur {

    int _capacity;
    int _size;
    int *_tab;

    public :
        Vecteur();
        Vecteur(int );
        ~Vecteur();
        int capacity() const;
        int size() const;



};























#endif
