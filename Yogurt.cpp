#include <iostream>
#include "Yogurt.h"
using namespace std;

double Yogurt::getcost(){
    double cost;
    cost=quantity*price;

   cout<< cost<<endl;
   stock=stock-quantity;
   return cost;
}
Yogurt::Yogurt(){
    stock=0;
    price=0.0;
    typeofunit="litre";
    quantity=0;
}
Yogurt::Yogurt(int stock_,double price1,string type1,int quantity_):Dairy(quantity_){
stock=stock_;
price=price1;
typeofunit=type1;
}
Yogurt::~Yogurt(){
}
void Yogurt::print(){
    cout<<"The current price of yogurt is "<<price<<" Measured in "<<typeofunit<<endl;
    //cout<<quantity<<endl;
}
int Yogurt::getstock(){
return stock;}


