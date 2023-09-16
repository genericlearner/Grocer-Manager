#include <iostream>
#include "Salmon.h"

double Salmon::getcost(){
    double cost;
    cost=quantity*price;

   cout<< cost<<endl;
   stock=stock-quantity;
   return cost;
}
Salmon::Salmon(){
    stock=0;
    price=0.0;
    typeofunit="";
    quantity=0;
}
Salmon::Salmon(int stock_,double price1,string type1,int quantity_):Fish(quantity_){
stock=stock_;
price=price1;
typeofunit=type1;
}
Salmon::~Salmon(){
}
void Salmon::print(){
    cout<<"The current price of Salmon is "<<price<<" Measured in "<<typeofunit<<endl;
    //cout<<quantity<<endl;
}
int Salmon::getstock(){
return stock;}


