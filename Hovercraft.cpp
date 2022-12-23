#include <iostream>
using namespace std;
int main(){
    int production,selling_price,insurance,sold_hovercrafts,costs;
    production = 20000000;
    insurance = 1000000;
    costs = production + insurance;
    cin >> sold_hovercrafts;
    if ((sold_hovercrafts*3000000)<costs)
    {
        cout << "Loss";
    }
    else if ((sold_hovercrafts*3000000)==costs)
    {
        cout << "Broke even";
    }
    else if ((sold_hovercrafts*3000000)>costs)
    {
        cout << "Profit";
    }
}