#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool isPalindrome(string inputString) {
    string reversedString = inputString;
    reverse(reversedString.begin(), reversedString.end());
    return reversedString == inputString;
}
int main() {
    system ("cls");
    string inputString;
    cout << "Enter the string: ";
    cin >> inputString;
    if (isPalindrome(inputString)) {
        cout << "This string is palindrome";
    } else {
        cout << "This string is not palindrome";
    }
    return 0;
}