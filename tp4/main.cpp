#include <iostream>
#include "troncature_type.hpp"



int main(int,char**) {

    /*Bavarde b1{1};
    b1.test1(b1);

    b1.test2a();*/

    Fille fille;

   

   afficher1(fille); //c'est le constructeur de mere qui est appelé
   //en fait ici la fonction crée une nouvelle instace. C'est pour ça 
   //qu'à l'execution il sera considéré comme mere et non fille
   afficher2(fille); //appelle le constructeur de Fille
   afficher3(&fille);//appelle fille
//quand on met la methode en virtual c'est sufisant à ce que le compilo
//aille chercher la bonne 
   return 0;




}