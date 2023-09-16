#ifndef ORANGE_H_INCLUDED
#define ORANGE_H_INCLUDED
#include <iostream>
using namespace std;
#include "Vegetable&fruit.h"
class Orange:public Vegetablefruit{
    private:
    int stock;
    double price;
    string typeofunit;
public:
    Orange();
    virtual ~Orange();
    int getstock();
    Orange(int,double,string,int);
    virtual void print();
    virtual double getcost();
};



#endif // ORANGE_H_INCLUDED
