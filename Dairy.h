#ifndef DAIRY_H_INCLUDED
#define DAIRY_H_INCLUDED
#include "Grocery.h"
class Dairy:public Grocery{

    public:
     Dairy(int);
     Dairy();
   virtual ~Dairy();
    virtual void print();
    virtual double getcost();

};



#endif // DAIRY_H_INCLUDED
