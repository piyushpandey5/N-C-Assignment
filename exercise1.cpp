#include<iostream>
using namespace std;
# define a 30.48
# define b 2.54
int main(){
    float height,heightinfeet,heightinches;
    cout<<"enter height in cm:";
    cin>>height;
    heightinfeet=height/a;
    cout<<"height in feet is:"<<heightinfeet<<"feet"<<endl;
    heightinches=height/b;
    cout<<"height in inches:"<<heightinches<<"inches"<<endl;
}