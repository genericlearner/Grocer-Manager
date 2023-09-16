#ifndef MILK_H_INCLUDED
#define MILK_H_INCLUDED
#include <iostream>
#include "Dairy.h"
using namespace std;

class Milk:public Dairy{
private:
    int stock;
    double price;
    string typeofunit;
    public:
    Milk();
    virtual ~Milk();
    int getstock();
    Milk(int,double,string,int);
    virtual void print();
    virtual double getcost();

};

#endif // MILK_H_INCLUDED
