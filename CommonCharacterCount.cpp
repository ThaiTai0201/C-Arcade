#include <iostream>
#include <map>

using namespace std;

int commonCharacterCount(string s1, string s2) {
    int count = 0;
    map<char, int> frequency;
    
    for (char c : s1) {
        frequency[c]++;
    }

    for (char c : s2) {
        count += min(frequency[c], 1);
        frequency[c]--;
    }

    return count;
}

int main() {
    string s1 = "aabcc";
    string s2 = "adcaa";

    int result = commonCharacterCount(s1, s2);
    cout << "Common character between string s1 & string s2: " << result;

    return 0;
}