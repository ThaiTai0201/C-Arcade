#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float a, b, c;
    cout << "Nhap cac he so a, b, c cua phuong trinh:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    float delta = pow(b, 2) - 4*a*c;
    float x = -b / 2*a, x1 = -b+sqrt(delta) / 2*a, x2 = -b-sqrt(delta) / 2*a;
    if (delta < 0) {
        cout << "Phuong trinh vo nghiem.";
    }
    else if (delta == 0) {
        cout << "Phuong trinh co nghiem kep: " << endl;
        cout << "x = -b / 2*a = " << x;
    }
    else {
        cout << "Phuong trinh co 2 nghiem phan biet: " << endl;
        cout << "x1 = -b+sqrt(delta) / 2*a = " << x1 << endl;
        cout << "x2 = -b-sqrt(delta) / 2*a = " << x2;
    }
    return EXIT_SUCCESS;
}