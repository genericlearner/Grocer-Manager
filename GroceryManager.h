#ifndef GROCERYMANAGER_H_INCLUDED
#define GROCERYMANAGER_H_INCLUDED
#include <iostream>
using namespace std;
#include "Grocery.h"
#include "Meat.h"
#include "Dairy.h"
#include "Vegetable&fruit.h"
#include "CustomerOrder.h"
#include "Beef.h"
#include "Chicken.h"
#include "Fish.h"
#include "Milk.h"
#include "Cheese.h"
#include "Yogurt.h"
#include "Eggs.h"
#include "Haddock.h"
#include "Seabass.h"
#include "Salmon.h"
#include "Orange.h"
#include "Tomato.h"
#include "Pantry.h"

class GroceryManager{
    private:

        Meat m;
        Dairy d;
        Vegetablefruit vf;
        Grocery *g;
        Pantry p;
        Grocery* groce[5];
    CustomerOrder* customerorder[100];
    public:
        GroceryManager();
        GroceryManager(Grocery *,Meat m1,Dairy d1,Vegetablefruit vf1);
        void print();
        int searching(string);
        void browse();
        bool addcustomer(CustomerOrder*);
        void showcustomer();



};



#endif // GROCERYMANAGER_H_INCLUDED
