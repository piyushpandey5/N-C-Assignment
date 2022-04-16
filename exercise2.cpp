#include<iostream>
using namespace std;
# define a 30.48
# define b 2.54
# define c 2.205
# define d 0.0254

int main(){
    float h1,h2,h3,h4,w1,w2,w3,bmi;
    cout<<"enter height in cm:";
    cin>>h1;
    h2=h1/a;
    cout<<"enter height in feet:"<<h2<<"feet"<<endl;
    h3=h1/b;
    cout<<"enter height in inches:"<<h3<<"inches"<<endl;
    h4=h1*d;
    cout<<"height in meter:"<<h4<<" meter"<<endl;
    cout<<"enter weight in kg:"<<endl;
    cin>>w1;
    w2=w1*c;
    cout<<"weight in pound is:"<<w2<<"pound"<<endl;
    w3=w2/c;
    cout<<"weight in kg"<< w3<<"kg"<<endl;
    bmi=h4*h4/w3;
    cout<<"bmi is:"<<bmi<<endl;
    



  

}