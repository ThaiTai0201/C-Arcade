#include <iostream>

using namespace std;

int main() {
    int a, b, tong, trungBinhCong;
    cout << "Nhap 2 so nguyen a, b: " << endl;
    cin >> a >> b;
    tong = a + b;
    trungBinhCong = tong / 2;
    cout << "a + b = " << tong << endl << "TBC(a, b) = " << trungBinhCong;
    return EXIT_SUCCESS;
}