#include <iostream>

using namespace std;

///Exercice 1
/*
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
   virtual ~Fille() {
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

*/

///Exercice 2

class Mere {
 public:
  Mere() { m(); }
  virtual void m() { cout << "mm" << endl; }
  virtual ~Mere() {}
};

class Fille : public Mere {
 public:
  Fille() { m(); }
  virtual void m() { cout << "mf" << endl; }
  virtual ~Fille() {}
};


int main(int , char**) {

    Fille f;  // ça veut dire donc que ici on devait avoir mf et mf au lieu
    //  de mm et mf ? Quand on appelle le constructeur de Mere 
    // ça appelle la methode m() de mere au lieu de la methode m 
    // de fille au lieu du contraire 

    Mere * o = new Fille;
    o->m();
}