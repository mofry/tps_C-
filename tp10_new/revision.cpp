#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <stack>
#include <string>
#include <queue>





class ZZ {
  std::string _nom, _prenom;
  double note;
  public :
    friend std::ostream& operator<<(std::ostream& os , const ZZ& zz);
    friend bool operator<(const ZZ& zz1 , const ZZ& zz2 );
    ZZ(std::string nom,std::string prenom,int n) : _nom(nom), _prenom(prenom),note(n){}
    ~ZZ(){}
    



};
bool operator<(const ZZ& zz1 , const ZZ& zz2 ) {
  if(zz1.note < zz2.note) return true;
  return false;
}

std::ostream& operator<<(std::ostream& os , const ZZ& zz) {
  os<<zz.note;
  return os;
}


  using vzz = std::vector<ZZ>;

int main(int , char **) {




  // vzz zz;




  // ZZ zz1("Fry", "Morrel",18);

  // ZZ zz2("Fry", "Marshall",17);
  
  // zz.push_back(zz1);Le compilateur ne nous laisse pas écrire un opérateur de comparaison sur des pointeurs, il est nécessaire de passer par un comparateur
  // zz.push_back(zz2);

  // std::priority_queue<ZZ> tri;
  // for(vzz::iterator it = zz.begin();it != zz.end();it++) {
  //   tri.push(*it);
  // }
  // std::cout<<tri.top();

  std::vector<ZZ*> pzz;
  ZZ* zz1 = new ZZ("Fry", "Morrel",18);
  ZZ* zz2 = new ZZ("Fry", "Marshall",17);
  pzz.push_back(zz1);
  pzz.push_back(zz2);
  delete zz1;
  delete zz2;


  return 0;
}







/*
int main (int, char **) {
//   std::vector<int> v;
//   int input;

//   while (std::cin >> input)
//     v.push_back (input);

//    std::sort(v.begin(), v.end());
// //     for(int i =0; i<(int) v.capacity()+458;i++) {
// //         std::cout<< v[i]<<std::endl;
// //     }

// //std::copy(v.begin(),v.end(),std::ostream_iterator<int> (std::cout , "\n") );



  // std::stack<int> is;
  // std::stack<double, std::vectusing vzz = std::vector<ZZ>;


int 
vzz zz;


or<double> > ds;

  // for (int i = 0; i < 100; ++i)
  //   is.push(i);

  // while (!is.empty()) {
  //   // std::cout << is.top() << std::endl;
  //    ds.push((double)is.top()*is.top());
  //    std::cout << ds.top() << std::endl;
  //    is.pop();
  // }



  return 0;
}*/


