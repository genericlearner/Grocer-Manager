#include <iostream>
#include "Seabass.h"

double Seabass::getcost(){
    double cost;
    cost=quantity*price;

   cout<< cost<<endl;
   stock=stock-quantity;
   return cost;
}
Seabass::Seabass(){
    stock=0;
    price=0.0;
    typeofunit="";
    quantity=0;
}
Seabass::Seabass(int stock_,double price1,string type1,int quantity_):Fish(quantity_){
stock=stock_;
price=price1;
typeofunit=type1;
}
Seabass::~Seabass(){
}
void Seabass::print(){
    cout<<"The current price of seabass is "<<price<<" Measured in "<<typeofunit<<endl;
    //cout<<quantity<<endl;
}
int Seabass::getstock(){
return stock;}

