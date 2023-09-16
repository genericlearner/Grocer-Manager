#include <iostream>
#include "Grocery.h"
using namespace std;

 Grocery::Grocery(int quantity1){
     quantity=quantity1;
}
Grocery::~Grocery(){
}
Grocery::Grocery(){
    quantity=0;
}

void Grocery::print(){
    cout<<"Meat"<<endl;
    cout<<"Dairy"<<endl;
    cout<<"Vegetable"<<endl;
}
