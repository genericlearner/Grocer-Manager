#ifndef PANTRY_H_INCLUDED
#define PANTRY_H_INCLUDED
#include "Grocery.h"

class Pantry:public Grocery{
    public:
    Pantry();
     Pantry(int);
   virtual ~Pantry();
   int getstock();
    virtual void print();
    virtual double getcost();
};



#endif // PANTRY_H_INCLUDED
