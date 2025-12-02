#ifndef TRONCATURE_TYPE_HPP
#define TRONCATURE_TYPE_HPP



class Mere {
 public:
   virtual void afficher() const;
   //en virtual essentiellement parce que ce sera redéfini
};

class Fille : public Mere {
 public:
   virtual void afficher() const override;
};


void afficher1(Mere m);
void afficher2(Mere &m);
void afficher3(Mere *m);

#endif