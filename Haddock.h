#ifndef HADDOCK_H_INCLUDED
#define HADDOCK_H_INCLUDED
#include <iostream>
#include "Fish.h"
using namespace std;
class Haddock:public Fish{
    private:
int stock;
    double price;
    string typeofunit;
    public:
    Haddock();
    virtual ~Haddock();
    int getstock();
    Haddock(int,double,string,int);
    virtual void print();
    virtual double getcost();

    };

#endif // HADDOCK_H_INCLUDED
