#include <iostream>
#include "Milk.h"
using namespace std;


double Milk::getcost(){
    double cost;
    cost=quantity*price;

   cout<< cost<<endl;
   stock=stock-quantity;
   return cost;
}
Milk::Milk(){
    stock=0;
    price=0.0;
    typeofunit="litre";
    quantity=0;
}
Milk::Milk(int stock_,double price1,string type1,int quantity_):Dairy(quantity_){
stock=stock_;
price=price1;
typeofunit=type1;
}
Milk::~Milk(){
}
void Milk::print(){
    cout<<"The current price of milk is "<<price<<" Measured in "<<typeofunit<<endl;
    //cout<<quantity<<endl;
}
int Milk::getstock(){
return stock;}

