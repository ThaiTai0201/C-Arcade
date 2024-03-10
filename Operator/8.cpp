#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x, y, summation, multiplication, q;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    summation = x + y;
    multiplication = x * y;
    q = pow(summation, 2) + multiplication * (summation - x) * (multiplication + y);
    cout << "Value of expression: q = " << q << endl;

    return EXIT_SUCCESS;
}