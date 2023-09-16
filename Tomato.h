#ifndef TOMATO_H_INCLUDED
#define TOMATO_H_INCLUDED
#include <iostream>
using namespace std;
#include "Vegetable&fruit.h"
class Tomato:public Vegetablefruit{
    private:
    int stock;
    double price;
    string typeofunit;
public:
    Tomato();
    virtual ~Tomato();
    int getstock();
    Tomato(int,double,string,int);
    virtual void print();
    virtual double getcost();
};




#endif // TOMATO_H_INCLUDED
