#include<iostream>
using namespace std;
int main(){
    float petrol,distance_km,m;
    cout<<"enter the petrol required :"<<endl;
    cin>>petrol;
    cout<<"how many distance traveled:"<<endl;
    cin>>distance_km;
    m=(petrol/distance_km)*100;
    cout<<"how many petrol it taken to go 100km:"<<m<< "litre"<<endl;

}