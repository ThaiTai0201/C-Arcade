#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Type integer number want to check: ";
    cin >> num;
    if (num < 100) {
        cout << num << " is an integer smaller than 100!";
    }
    else if (num > 100) {
        cout << num << " is an integer greater than 100!";
    }

    return EXIT_SUCCESS;
}