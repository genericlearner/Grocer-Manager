#ifndef CHEESE_H_INCLUDED
#define CHEESE_H_INCLUDED
#include <iostream>
#include "Dairy.h"
using namespace std;
class Cheese:public Dairy{
private:
    int stock;
    double price;
    string typeofunit;
    public:
    Cheese();
    int getstock();
    virtual ~Cheese();
    Cheese(int,double,string,int);
    virtual void print();
    virtual double getcost();

};



#endif // CHEESE_H_INCLUDED
