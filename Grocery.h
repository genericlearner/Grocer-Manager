#ifndef GROCERY_H_INCLUDED
#define GROCERY_H_INCLUDED

class Grocery{

public:
    Grocery(int);
int quantity;
Grocery();
    virtual ~Grocery();
    virtual double getcost()=0;
    virtual void print()=0;
    void increasequantity(int);


};



#endif // GROCERY_H_INCLUDED
