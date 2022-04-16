#include<iostream>
using namespace std;
struct CandyBar{
    string brand="Mocha Munch";
    float weight=2.3;
    int calories=350;
};
int main(){
    CandyBar snack;
    cout<<snack.brand<<endl;
    cout<<snack.weight<<endl;
    cout<<snack.calories<<endl;

}