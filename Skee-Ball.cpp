#include <iostream>
using namespace std;
int main(){
    int points,price;
    cout << "Please instert number of scored points and price of the squirt gun (in tickets): " << endl;
    cin >> points;
    cin >> price;
    if (points/12>price)
        cout << "Buy it!";
    else
        cout << "Try again";
}