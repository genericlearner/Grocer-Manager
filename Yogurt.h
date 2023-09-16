#ifndef YOGURT_H_INCLUDED
#define YOGURT_H_INCLUDED
#include <iostream>
#include "Dairy.h"
using namespace std;

class Yogurt:public Dairy{
private:
    int stock;
    double price;
    string typeofunit;
    public:
    Yogurt();
    virtual ~Yogurt();
    int getstock();
    Yogurt(int,double,string,int);
    virtual void print();
    virtual double getcost();
    };

#endif // YOGURT_H_INCLUDED
