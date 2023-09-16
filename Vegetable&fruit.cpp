#include <iostream>
#include "Vegetable&fruit.h"
using namespace std;

Vegetablefruit::Vegetablefruit(){
};

Vegetablefruit::~Vegetablefruit(){
}
Vegetablefruit::Vegetablefruit(int quantity3):Grocery(quantity3){
}
double Vegetablefruit::getcost(){
}
void Vegetablefruit::print(){
    cout<<"Vegetables in store: "<<endl;
    cout<<"Orange"<<endl;
    cout<<"tomato"<<endl;
}
