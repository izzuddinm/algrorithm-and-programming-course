#include <iostream>
using namespace std;

int main () {

    int maxRetry = 10;

    for (int i = 20; i > maxRetry ; i--) {
        cout << "For - Index ke " << i << endl;
    }

    int doRetry = 0;
    do {
        doRetry++;
        cout << "Do While - Index ke " << doRetry << endl;
    } while (doRetry < maxRetry);

    while (doRetry < maxRetry) {
        doRetry++;
        cout << "While : " << doRetry;
    }
    
}