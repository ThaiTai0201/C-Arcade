#include <iostream>
using namespace std;
int solution(int year) {
    int century;
    return century = (year - 1) / 100 + 1;
}
int main() {
    int year;
    cout << "Type year right here: ";
    cin >> year;
    int result = solution(year);
    cout << "The year " << year << " belong(s) to the " << result << " century";
    return 0;
}