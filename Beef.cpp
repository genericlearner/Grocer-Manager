#include <iostream>
#include "Beef.h"

double Beef::getcost(){
    double cost;
    cost=quantity*price;

   cout<< cost<<endl;
   stock=stock-quantity;
   return cost;
}
Beef::Beef(){
    stock=0;
    price=0.0;
    typeofunit="";
    quantity=0;
}
Beef::Beef(int stock_,double price1,string type1,int quantity_):Meat(quantity_){
stock=stock_;
price=price1;
typeofunit=type1;
}
Beef::~Beef(){
}
void Beef::print(){
    cout<<"The current price is of beef is "<<price<<" Measured in "<<typeofunit<<endl;
    //cout<<quantity<<endl;
}
int Beef::getstock(){
    cout<<stock<<endl;
return stock;}
