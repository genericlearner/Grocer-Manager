#ifndef CHICKEN_H_INCLUDED
#define CHICKEN_H_INCLUDED
#include <iostream>
#include "Meat.h"
using namespace std;
class Chicken:public Meat{
private:
    int stock;
    double price;
    string typeofunit;

public:
    Chicken();
    virtual ~Chicken();
    int getstock();
    Chicken(int,double,string,int);
    virtual void print();
    virtual double getcost();
};


#endif // CHICKEN_H_INCLUDED
