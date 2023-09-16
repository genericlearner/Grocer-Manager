#ifndef MEAT_H_INCLUDED
#define MEAT_H_INCLUDED
#include "Grocery.h"
class Meat:public Grocery{


public:
    Meat();
     Meat(int);
   virtual ~Meat();
    virtual void print();
    virtual double getcost();
};


#endif // MEAT_H_INCLUDED
