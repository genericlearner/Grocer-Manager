#ifndef SALMON_H_INCLUDED
#define SALMON_H_INCLUDED
#include <iostream>
#include "Fish.h"
using namespace std;

class Salmon:public Fish{
    private:
int stock;
    double price;
    string typeofunit;
    public:
    Salmon();
    virtual ~Salmon();
    int getstock();
    Salmon(int,double,string,int);
    virtual void print();
    virtual double getcost();};

#endif // SALMON_H_INCLUDED
