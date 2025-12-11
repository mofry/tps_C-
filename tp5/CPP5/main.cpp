// fichier cpp pour l'utilisation officielle de la classe Chaine
// pas pour les tests
#include <iostream>
#include <sstream>
#include "Chaine.hpp"


/*void afficherParValeur(Chaine) {}
void afficherParReference(Chaine &) {}*/


int main(int, char**) {
	/*Chaine c("une petite chaine");

	afficherParValeur(c);
	afficherParReference(c);*/


	const char *      original = "une chaine a tester";
    const Chaine      c1(original);
    std::stringstream ss;

	c1.afficher(ss);


	return 0;
}