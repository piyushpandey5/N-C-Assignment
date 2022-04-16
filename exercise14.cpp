#include<iostream>
using namespace std;
struct pizza
    {
    string company;
    float diameter;
    int weight ;
};
int main()
{
    pizza a;
    cout<<"enter pizza company:"<<endl;
    cin>>a.company;
    cout<<"enter pizza diameter:"<<endl;
    cin>>a.diameter;
    cout<<"enter weight of pizza:"<<endl;
    cin>>a.weight;
}