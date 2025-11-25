#include <iostream>

class Bavarde {

    Bavarde(int );
    ~Bavarde();
  
} bizarre(1);

Bavarde globale(2);

void fonction(Bavarde b) {
  std::cout << "code de la fonction";
}

int main(int, char **) {
  Bavarde b1(3);
  Bavarde b2(4);
  Bavarde * p = new Bavarde(5);
  // fonction(b1);

  return 0;
}