#include <iostream>
#include "Orange.h"
using namespace std;

double Orange::getcost(){
    double cost;
    cost=quantity*price;

   cout<< cost<<endl;
   stock=stock-quantity;
   return cost;
}
Orange::Orange(){
    stock=0;
    price=0.0;
    typeofunit="";
    quantity=0;
}
Orange::Orange(int stock_,double price1,string type1,int quantity_):Vegetablefruit(quantity_){
stock=stock_;
price=price1;
typeofunit=type1;
}
Orange::~Orange(){
}
void Orange::print(){
    cout<<"The current price of oranges is "<<price<<" Measured in "<<typeofunit<<endl;
    //cout<<quantity<<endl;
}
int Orange::getstock(){
return stock;}

