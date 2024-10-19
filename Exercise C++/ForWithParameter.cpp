#include <iostream>
using namespace std;

int main () {

    int startValue, endValue, increment; 

    cout << "Input Start Value = ";
    cin >> startValue;

    cout << "Input End Value = ";
    cin >> endValue;


    cout << "Input Increment = ";
    cin >> increment;

    for (startValue; startValue < endValue; startValue += increment) {
        cout << "Value Index On : " << startValue << endl;
    }
    
}