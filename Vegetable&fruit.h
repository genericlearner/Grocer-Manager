#ifndef VEGETABLE&FRUIT_H_INCLUDED
#define VEGETABLE&FRUIT_H_INCLUDED
#include "Grocery.h"
class Vegetablefruit:public Grocery{
    public:
        Vegetablefruit();
     Vegetablefruit(int);
   virtual ~Vegetablefruit();
    virtual void print();
    virtual double getcost();
};


#endif // VEGETABLE&FRUIT_H_INCLUDED
