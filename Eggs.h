#ifndef EGGS_H_INCLUDED
#define EGGS_H_INCLUDED
#include <iostream>
#include "Dairy.h"
using namespace std;
class Egg:public Dairy{
    int stock;
    double price;
    string typeofunit;
    public:
    Egg();
    int getstock();
    virtual ~Egg();
    Egg(int,double,string,int);
    virtual void print();
    virtual double getcost();
};


#endif // EGGS_H_INCLUDED
