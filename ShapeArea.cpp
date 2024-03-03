#include <iostream>
using namespace std;
int shapeCaculate(int n) {
    return n * n + (n - 1) * (n - 1);
}
int main() {
    int n;
    cout << "Value of n is: n = ";
    cin >> n;
    int shapeOfArea = shapeCaculate(n);
    cout << "The area of the " << n << "-interesting polygon is: " << shapeOfArea;
    return 0;
}