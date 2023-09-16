#include <iostream>
using namespace std;
#include "CustomerOrder.h"
CustomerOrder::~CustomerOrder(){}

CustomerOrder::CustomerOrder(int id){
    custid=id;
        noofitem=0;
        finalcost=0.0;
        for(int i=0;i<100;i++){
            grocerycart[i]=nullptr;
        }

}
CustomerOrder::getid(){
return custid;}
bool CustomerOrder::additem(Grocery* item){


for(int i=0;i<=100;i++){
        for (int i = 0; i < 100; i++)
	{
		if (grocerycart[i] == nullptr)
		{
			grocerycart[i] = item;
            noofitem++;
			return true;
		}
	}

       return false;


}

}
bool CustomerOrder::removeitem(Grocery* item){
for(int i=0;i<noofitem;i++){
if(grocerycart[i]!=nullptr){
if(grocerycart[i]==item){
    grocerycart[i]=nullptr;
    return true;}}
}
return false;
}
double CustomerOrder::getcost(){
    for(int i=0;i<noofitem;i++){
            cout<<"Item"<<i+1<<"cost: "<<endl;
        finalcost=finalcost+grocerycart[i]->getcost();
    }

    cout<<"Total: "<<finalcost<<endl;

}
void CustomerOrder::print(){

    for(int i=0;i<noofitem;i++){
        grocerycart[i]->print();
    }

}





