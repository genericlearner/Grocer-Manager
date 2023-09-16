#include <iostream>
#include "Tomato.h"
using namespace std;

double Tomato::getcost(){
    double cost;
    cost=quantity*price;

   cout<< cost<<endl;
   stock=stock-quantity;
   return cost;
}
Tomato::Tomato(){
    stock=0;
    price=0.0;
    typeofunit="";
    quantity=0;
}
Tomato::Tomato(int stock_,double price1,string type1,int quantity_):Vegetablefruit(quantity_){
stock=stock_;
price=price1;
typeofunit=type1;
}
Tomato::~Tomato(){
}
void Tomato::print(){
    cout<<"The current price of tomato is "<<price<<" Measured in "<<typeofunit<<endl;
    //cout<<quantity<<endl;
}
int Tomato::getstock(){
return stock;}


