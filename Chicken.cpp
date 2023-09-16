#include <iostream>
#include "Chicken.h"
using namespace std;



double Chicken::getcost(){
    double cost;
    cost=quantity*price;

   cout<< cost<<endl;
   stock=stock-quantity;
   return cost;
}
Chicken::Chicken(){
    stock=0;
    price=0.0;
    typeofunit="";
    quantity=0;
}
Chicken::Chicken(int stock_,double price1,string type1,int quantity_):Meat(quantity_){
stock=stock_;
price=price1;
typeofunit=type1;
}
Chicken::~Chicken(){
}
void Chicken::print(){
    cout<<"The current price is of chicken"<<price<<" Measured in "<<typeofunit<<endl;
    //cout<<quantity<<endl;
}
int Chicken::getstock(){
return stock;}

