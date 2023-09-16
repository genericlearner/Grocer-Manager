#include <iostream>
#include "Haddock.h"

double Haddock::getcost(){
    double cost;
    cost=quantity*price;

   cout<< cost<<endl;
   stock=stock-quantity;
   return cost;
}
Haddock::Haddock(){
    stock=0;
    price=0.0;
    typeofunit="";
    quantity=0;
}
Haddock::Haddock(int stock_,double price1,string type1,int quantity_):Fish(quantity_){
stock=stock_;
price=price1;
typeofunit=type1;
}
Haddock::~Haddock(){
}
void Haddock::print(){
    cout<<"The current price of haddock "<<price<<" Measured in "<<typeofunit<<endl;
    //cout<<quantity<<endl;
}
int Haddock::getstock(){
return stock;}

