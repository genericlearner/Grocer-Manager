#include <iostream>
#include "Dairy.h"
using namespace std;
Dairy::Dairy(){
}
Dairy::Dairy(int quantity10):Grocery(quantity10){
}
Dairy::~Dairy(){
}

void Dairy::print(){
    cout<<"4 dairy items: "<<endl;
    cout<<"Milk"<<endl;
    cout<<"Cheese"<<endl;
    cout<<"Yogurt"<<endl;
    cout<<"Eggs"<<endl;
}
double Dairy::getcost(){
}
