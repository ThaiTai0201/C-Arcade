#include <iostream>

using namespace std;

int main() {
    int v, u, a, t;
    cout << "Nhap lan luot toc do ban dau, gia toc, thoi gian di chuyen cua vat the: ";
    cin >> u >> a >> t;
    v = u + a * t;
    cout << "Van toc cuoi cung cua vat the: v = " << v;
    return EXIT_SUCCESS;
}