#include <iostream>
#include "Cheese.h"
using namespace std;

double Cheese::getcost(){
    double cost;
    cost=quantity*price;

   cout<< cost<<endl;
   stock=stock-quantity;
   return cost;
}
Cheese::Cheese(){
    stock=0;
    price=0.0;
    typeofunit="litre";
    quantity=0;
}
Cheese::Cheese(int stock_,double price1,string type1,int quantity_):Dairy(quantity_){
stock=stock_;
price=price1;
typeofunit=type1;
}
Cheese::~Cheese(){
}
void Cheese::print(){
    cout<<" The current price of cheese is "<<price<<" Measured in "<<typeofunit<<endl;
    //cout<<quantity<<endl;
}
int Cheese::getstock(){
return stock;}


