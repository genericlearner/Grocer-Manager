#include <iostream>
#include <array>
#include "Grocery.h"
#include "Meat.h"
#include "Beef.h"
#include "CustomerOrder.h"
#include "GroceryManager.h"
#include "Vegetable&fruit.h"
#include "Dairy.h"


using namespace std;

int main()
{
    GroceryManager *grocmanager=new GroceryManager();
    Grocery* g[20];

    Beef bf(20,15,"kg",1);
    Beef bf2(10,15,"kg",1);
    Milk milk(200,2,"per litre",1);
    Cheese cheese(30,25,"per kg",1);
    Yogurt yogurt(20,4,"per kg",1);
    Egg egg(40,3,"per dozen",1);
    Salmon s1(50,28,"kg",1);
    Seabass s2(40,15,"kg",1);
    Haddock h1(30,20,"Kg",1);
    CustomerOrder *cust[5];
    for(int i=0;i<5;i++){
        cust[i]=new CustomerOrder(402043+i);
    }
    grocmanager->addcustomer(cust[0]);

    g[0]=&bf;
    g[1]=&bf2;
    g[3]=&cheese;
    g[4]=&milk;
    g[5]=&yogurt;
    g[6]=&s1;
    g[7]=&h1;
    grocmanager->addcustomer(cust[0]);
cout<<"Customer 1 order"<<endl;
//if the item is more than 1, we use for loop
       for(int i=0;i<2;i++){
        cust[0]->additem(g[0]);
       }
    cust[0]->additem(g[6]);
    cust[0]->additem(g[7]);
    cust[0]->additem(g[3]);
    cust[0]->getcost();




cout<<"searching cheese in the array"<<endl;
    grocmanager->searching("Cheese");
    cout<<"Searching salmon in the array"<<endl;
    grocmanager->searching("Salmon");
    cout<<"Browsing options for grocery: "<<endl;
    grocmanager->browse();

    return 0;
}
