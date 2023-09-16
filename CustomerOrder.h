#ifndef CUSTOMERORDER_H_INCLUDED
#define CUSTOMERORDER_H_INCLUDED
#include "Grocery.h"

class CustomerOrder{
private:
    int custid;
    int noofitem;

    double finalcost;
    Grocery* grocerycart[100];

public:
    CustomerOrder(int);
    int getid();
    ~CustomerOrder();
    bool additem(Grocery*);
    bool removeitem(Grocery*);
    virtual double getcost();
    virtual void print();


};


#endif // CUSTOMERORDER_H_INCLUDED
