#include "GroceryManager.h"
#include <iostream>
using namespace std;

GroceryManager::GroceryManager(){

   groce[0]=g;
    groce[1]=&m;
    groce[2]=&vf;
    groce[3]=&d;
    groce[4]=&p;
    for(int i=0;i<100;i++){
        customerorder[i]=nullptr;
    }

}
GroceryManager::GroceryManager(Grocery *g1,Meat m1,Dairy d1,Vegetablefruit vf1){
    g=g1;
    m=m1;
    d=d1;
    vf=vf1;
    groce[0]=g;
    groce[1]=&m;
    groce[2]=&vf;
    groce[3]=&d;
}
void GroceryManager::print(){

for(int i=1;i<4;i++){
    groce[i]->print();
}
}
void GroceryManager::browse(){

    groce[1]->print();
    Meat *meat[3];
    Beef f(10,10,"kg",5);
    Chicken chick(20,10,"kg",7);
    Fish fish;
    meat[0]=&f;
    meat[1]=&chick;
    meat[2]=&fish;


    for(int i=0;i<3;i++){
            meat[i]->print();
    }
    Fish *fish2[3];
    Salmon s1(50,28,"kg",5);
    Seabass s2(40,15,"kg",6);
    Haddock h1(30,20,"Kg",5);
    fish2[0]=&s1;
    fish2[1]=&s2;
    fish2[2]=&h1;
    for(int i=0;i<3;i++){
        fish2[i]->print();
    }
    Dairy *dairy[4];
    Milk milk(200,2,"per litre",10);
    Cheese cheese(30,25,"per kg",5);
    Yogurt yogurt(20,4,"per kg",2);
    Egg egg(40,3,"per dozen",3);
    dairy[0]=&milk;
    dairy[1]=&cheese;
    dairy[2]=&yogurt;
    dairy[3]=&egg;
    groce[3]->print();
    for(int i=0;i<4;i++){
        dairy[i]->print();
    }
    Vegetablefruit *veggie[2];
    Orange o7(20,15,"kg",2);
    Tomato tt(30,10,"kg",3);
    veggie[0]=&o7;
    veggie[1]=&tt;
    groce[2]->print();
    for(int i=0;i<2;i++){
        veggie[i]->print();
    }


}
bool GroceryManager::addcustomer(CustomerOrder *Cust){
    for(int i=0;i<100;i++){
            if(customerorder[i]!=nullptr)
        if(Cust->getid()==customerorder[i]->getid())
            return false;
    }
    for(int i=0;i<100;i++){
        if(customerorder[i]=nullptr)
            customerorder[i]=Cust;
        return true;
    }

}
int GroceryManager::searching(string item){
    cout<<"searching"<<endl;

        if(item=="Beef"||item=="Chicken"||item=="Fish"||item=="Haddock"||item=="Salmon"||item=="Seabass"){
            cout<<item<<" is in "<<1<<" index of array"<<endl;
            return 1;
        }
        else if(item=="Cheese"||item=="Eggs"||item=="Milk"||item=="Yogurt"){
                cout<<item<<" is in "<<3<<" index of array"<<endl;
            return 3;
        }
        else if(item=="Orange"||item=="Tomato"){
            cout<<item<<" is in "<<2<<" index of array"<<endl;
            return 2;
        }
        else if(item=="Pantry"){
            cout<<item<<" is in "<<4<<" index of array"<<endl;
            return 4;
        }
        else
            cout<<"Not in the system"<<endl;
            return -1;
}





