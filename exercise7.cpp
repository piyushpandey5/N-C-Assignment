#include <iostream>
using namespace std;
#define b 0.264172;
#define miles  62.14
int main()
{
    float gallon, litre, ans;
    cout << "enter fuel consumption in litre/100km:" << endl;
    cin >> litre;
    gallon = litre * b;
    cout << "The fuel in gallons:" << gallon << "gallons" << endl;
    ans = miles/gallon;
    cout << "how many fuel is taken to  go l/100 km:" << ans << "mpg" << endl;
}