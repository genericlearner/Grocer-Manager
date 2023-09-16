#include <iostream>
#include "Grocery.h"
#include "Meat.h"
using namespace std;
Meat::Meat(){
}
Meat::Meat(int quantity1):Grocery(quantity1){
}

 void Meat::print(){
     cout<<"Three types of Meat: "<<endl;
    cout<<"Chicken"<<endl;
    cout<<"Fish"<<endl;
    cout<<"Beef"<<endl;
}
Meat::~Meat(){
}

double Meat::getcost(){}
