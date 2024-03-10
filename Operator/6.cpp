#include <iostream>

using namespace std;

int main() {
    system ("cls");
    int x = 5;
    cout << "Gia tri x ban dau" << "\tBieu thuc" << "\tGia tri cua bieu thuc" << "\tGia tri x sau cung" << endl;
    cout << "\t" << x << "\t\t  x++" << "\t\t\t" << x << "\t\t\t" << x + 1 << endl;
    cout << "\t" << x << "\t\t  x--" << "\t\t\t" << x << "\t\t\t" << x - 1 << endl;
    cout << "\t" << x << "\t\t  ++x" << "\t\t\t" << ++x << "\t\t\t" << ++x << endl;
    cout << "\t" << x << "\t\t  --x" << "\t\t\t" << --x << "\t\t\t" << --x << endl;

    return EXIT_SUCCESS;
}