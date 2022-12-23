#include <iostream>
using namespace std;
int main(){
    int siblings, popsicles;
    cout << "Write amount of siblings and popsicles: " << endl;
    cin >> siblings >> popsicles;
    if (popsicles%siblings==0)
        cout << "give away";
    else
        cout << "eat them yourself";
}