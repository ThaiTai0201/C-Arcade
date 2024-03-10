#include <iostream>

using namespace std;

int main() {
    int a, b, c, MAX;
    cout << "a = ";     cin >> a;
    cout << "b = ";     cin >> b;
    cout << "c = ";     cin >> c;
    if (a > b && a > c) {
        MAX = a;
    }
    else if (b > a && b > c) {
        MAX = b;
    }
    else {
        MAX = c;
    }
    cout << "Greatest integer number is: " << MAX;

    return EXIT_SUCCESS;
}