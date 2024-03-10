#include <iostream>

using namespace std;

int main() {
    system ("cls");
    int x = 10, y = 5;
    cout << "Gia tri x\t" << "Gia tri y\t" << "Bieu thuc\t" << "Ket qua" << endl;
    cout << "   " << x << "\t\t    " << y << "\t\t" << "x = y + 3" << "\tx = " << y + 3 << endl;
    cout << "   " << x << "\t\t    " << y << "\t\t" << "x = y - 2" << "\tx = " << y - 2 << endl;
    cout << "   " << x << "\t\t    " << y << "\t\t" << "x = y * 5" << "\tx = " << y * 5 << endl;
    cout << "   " << x << "\t\t    " << y << "\t\t" << "x = x / y" << "\tx = " << x / y << endl;
    cout << "   " << x << "\t\t    " << y << "\t\t" << "x = x % y" << "\tx = " << x % y << endl;

    return EXIT_SUCCESS;
}