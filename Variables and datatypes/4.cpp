#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    string name;
    cout << "Type your full name: ";
    getline(cin, name);
    cout << "Your full name is: " << name << endl;
    
    return 0;
}