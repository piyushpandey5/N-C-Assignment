#include<iostream>
using namespace std;
struct candybar1{
    string brand;
    float weight;
    int calories;
};

int main(){
     candybar1 snack[3] = {
              { "A", 1.2, 100 },
              { "B", 2.3, 200 },
              { "C", 3.4, 300 }
       };
    
    cout<<snack[0].brand<<"\t"<<snack[0].weight<<"\t"<<snack[0].calories<<endl;
    cout<<snack[1].brand<<"\t"<<snack[1].weight<<"\t"<<snack[1].calories<<endl;
    cout<<snack[2].brand<<"\t"<<snack[2].weight<<"\t"<<snack[2].calories<<endl;
    return 0;

}