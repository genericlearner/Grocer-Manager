#include <iostream>
#include "Eggs.h"
using namespace std;

double Egg::getcost(){
    double cost;
    cost=quantity*price;

   cout<< cost<<endl;
   stock=stock-quantity;
   return cost;
}
Egg::Egg(){
    stock=0;
    price=0.0;
    typeofunit="";
    quantity=0;
}
Egg::Egg(int stock_,double price1,string type1,int quantity_):Dairy(quantity_){
stock=stock_;
price=price1;
typeofunit=type1;
}
Egg::~Egg(){
}
void Egg::print(){
    cout<<"The current price of Eggs is "<<price<<" Measured in "<<typeofunit<<endl;
    //cout<<quantity<<endl;
}
int Egg::getstock(){
return stock;}
