#include <iostream>
#include "Bavarde.hpp"
/*Petit apparté avant le tp
class Foo {
    public:
        int *p;
        Foo() {

            p = new int[3];
            std::cout << "heyy"<<std::endl;
        }

        ~Foo() {

            delete [] p;
        }

        Foo & operator=(const Foo & autre) {
            delete [] p;
            *this.p = autre.p;
            
        }
};

class Bar {
    public:
        Foo f;

        Bar() : f(Foo()) {  // ici on a plus de fuite mémoire car quand on passe par la liste d'initialisation on 
                            //le Foo f n'appelle plus le premier constructeur par defaut mais affecte directement

          //  f=Foo();
        }
        il faut redefiir un operateur de copie Foo& operateur = (Foo const& f)
};

int main() {
    Bar b;
    //Foo f;

    //pour le schema du tableau. A la base on voulait mettre p2 dans p1. oe p1 pointe quelque part d'autre donc on libére p1 on créée une nouvelle cellule où pointera p1 de 
    //de sorte à copier les éléments de cette cellule de p2. De sorte à ce que quand on veuille
    //libérer p1 ça ne supprime pas p2

}*/



int main(int, char **) {
  /*const int TAILLE = 5;
  Bavarde   tab1[TAILLE];
  Bavarde * tab2 = new Bavarde[TAILLE];
  // Combien d'instances sont créées ? 10

  for (int i =0; i < TAILLE; ++i) {
     tab1[i].afficher();
     tab2[i].afficher();
  }

  delete [] tab2;

  // Combien d'instances sont détruites ? 5 car on a pas mis les destructeurs du pointeur
  return 0;

  //difference entre new et malloc c'est que new fait un malloc et en plus de ça il appelle le constructeur
  */

  //Couple c(Bavarde(1), Bavarde(2));

  //c.afficher();

  /*Famille f1;
  Famille f2(3);
  f2.getFamille(2).setElt(1);
  std::cout<<f2.getFamille(2).getElt()<<std::endl;*/








}



