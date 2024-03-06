#include <iostream>
#include <vector>

using namespace std;

vector<string> findLongestStrings(string strings[], int size)
{
    int maxLength = strings[0].length();
    for (int i = 1; i < size; i++)
    {
        maxLength = max(maxLength, (int)strings[i].length());
    }
    vector<string> longestStrings;
    for (int i = 0; i < size; i++)
    {
        if (strings[i].length() == maxLength)
        {
            longestStrings.push_back(strings[i]);
        }
    }
    return longestStrings;
}

int main()
{
    string strings[] = {"aba", "aa", "ad", "vcd", "aba"};
    int size = sizeof(strings) / sizeof(strings[0]);
    vector<string> longestStrings = findLongestStrings(strings, size);
    cout << "Longest strings: ";
    for (const string &str : longestStrings)
    {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}