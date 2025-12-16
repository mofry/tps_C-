#include <iostream>


class M {
 public:
  M() {
    std::cout << "M::M()" << std::endl;
  }
   ~M() {
    std::cout << "M::~M()" << std::endl;
  }
    M(const M&) {
    std::cout << "M::M(const M&)" << std::endl;
  }

M& operator=(const M&) {
        std::cout << "M::operator=(const M&)" << std::endl;
        return *this;
}
};




class A {

    M m;

    public:
    A() {
        std::cout << "A::A()" << std::endl;
    }
    ~A() {
        std::cout << "A::~A()" << std::endl;
    }
        A(const M&) {
        std::cout << "A::A(const A&)" << std::endl;
    }

};




class F : public M {
 public:
  F() {
    std::cout << "F::F()" << std::endl;
  }
~F() {
    std::cout << "F::~F()" << std::endl;
  }
  
  F(const F& f) : M(f) {  //pourquoi on doit specifier le constructeur de copie de M 
                        //si ça se fait automatiquement
    std::cout << "F::F(const F&)" << std::endl;
  } //Vu qu'on redefinit le constructeur par copie de la classe Fille on doit forcement preciser
    //le constructeur de copie de la classe Mere


    F& operator=(const M&) {
        std::cout << "F::operator=(const &)" << std::endl;
        return *this;
    }
  
};
/*
int main(int, char**) {


    F f1;
  //F f2 = f1;  //le constructeur de copie par defaut de F a appelé le constructeur de Mere
    F f3;
    f1 = f3;

    


  return 0;
}
*/



class Bavarde {
  std::string nom;
 public :
   Bavarde(std::string n):nom(n) {
      std::cout << "constructeur " << nom << std::endl;
   }
   ~Bavarde() {
      std::cout << "destructeur " << nom << std::endl;
   }
};

Bavarde g("global");

int main(int, char **) {
   Bavarde t("local");
   static Bavarde s("statlocal");

   //std::exit(1);
   //std::terminate();
   std::unexpected(); // ne s'appelle pas normalement
   return 0;
}