#include <iostream>

using namespace std;

void calculate(int x, int y) {
    int tong, hieu, tich, thuong, phanDu;
    tong = x + y;
    cout << "(x + y) = " << tong << endl; 
    hieu = x - y;
    cout << "(x - y) = " << hieu << endl;
    tich = x * y;
    cout << "(x * y) = " << tich << endl;
    thuong = x / y;
    phanDu = x % y;
    cout << "(x / y) = " << thuong << " du " << phanDu;
}

int main() {
    int x = 10, y = 8;
    calculate(x, y);

    return EXIT_SUCCESS;
}