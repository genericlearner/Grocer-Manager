#include <iostream>
#include "Fish.h"

using namespace std;

Fish::Fish(){
}
Fish::Fish(int quantity1):Meat(quantity1){
}

 void Fish::print(){
     cout<<"3 Types of Fishes: "<<endl;
    cout<<"Haddock"<<endl;
    cout<<"Seabass"<<endl;
    cout<<"Salmon"<<endl;
}
Fish::~Fish(){
}
double Fish::getcost(){}
