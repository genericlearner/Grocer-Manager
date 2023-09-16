#ifndef SEABASS_H_INCLUDED
#define SEABASS_H_INCLUDED
#include <iostream>
#include "Fish.h"
using namespace std;
class Seabass:public Fish{
private:
    int stock;
    double price;
    string typeofunit;
    public:
    Seabass();
    virtual ~Seabass();
    int getstock();
    Seabass(int,double,string,int);
    virtual void print();
    virtual double getcost();
    };


#endif // SEABASS_H_INCLUDED
