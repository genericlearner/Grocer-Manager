#ifndef BEEF_H_INCLUDED
#define BEEF_H_INCLUDED
#include "Meat.h"
#include <iostream>
using namespace std;
class Beef:public Meat{
private:
    int stock;
    double price;
    string typeofunit;
public:
    Beef();
    virtual ~Beef();
    Beef(int,double,string,int);
    int getstock();
    virtual void print();
    virtual double getcost();
};



#endif // BEEF_H_INCLUDED
