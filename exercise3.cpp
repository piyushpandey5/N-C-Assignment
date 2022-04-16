#include<iostream>
using namespace std;
int main(){
float  a,b,c,q;
cout<<"enter latitude in degree:";
cin>>a;
cout<<"enter latitude in minutes:";
cin>>b;
cout<<"enter latitude in second :";
cin>>c;
q=a+(b/60+c/60);
cout<<"the arc is:"<<q<<endl;
}