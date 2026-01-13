#include <iostream>
class Mere {
 public:
  Mere() {
     std::cout << "Mere::Mere()" << std::endl;
    tab = new int[100];
  }
  virtual ~Mere() {
     std::cout << "Mere::~Mere()" << std::endl;
    delete [] tab;
  }
 protected:
  int * tab;
};

class Fille : public Mere {
 public:
   Fille() {
       std::cout << "Fille:Fille()" << std::endl;
      tab = new double[100];
      Mere::tab[50] = 4;

   }
   ~Fille() {
     std::cout << "Fille::~Fille()" << std::endl;
    delete [] tab;

  }
 protected:
  double * tab;
};

int main(int, char**) {
  Mere * m = new Fille();//pourquoi est ce que le destructeur de fille n'est pas appelé
//Le destructeur de Fille n'est pas appelé car le destructeur de Mere est pas en virtual
//L'appel du destrucSteur se fait donc en se basant sur le type statique ici Mere
  std::cout << "penser a valgrind" << std::endl;
  delete m;

  return 0;
}