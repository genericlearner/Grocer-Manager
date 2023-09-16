#ifndef FISH_H_INCLUDED
#define FISH_H_INCLUDED
#include "Meat.h"
class Fish:public Meat{
    public:
    Fish();
     Fish(int);
   virtual ~Fish();
    virtual void print();
    virtual double getcost();

};


#endif // FISH_H_INCLUDED
