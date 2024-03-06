#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string, string> nameList;
    nameList["0123456789"] = "Nguyen Van A";
    nameList["0987654321"] = "Tran Thi B";
    nameList["0123987654"] = "Le Van C";

    string phoneNumber;
    cout << "Type phone number you need to find user name: ";
    cin >> phoneNumber;
    
    auto it = nameList.find(phoneNumber);
    if (it == nameList.end()) {
        cout << "User name can not found!";
    }
    else {
        cout << "Subcriber's name need to find is: " << it->second << endl;
    }

    return 0;
}