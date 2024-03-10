// getline (#include <string>) là lệnh dùng để truyền nội dung được nhập từ bàn phím bởi "cin" đến một biến <variable>
// struct: getline (cin, <variable>)
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string age;
    cout << "Type your age right here: ";
    getline(cin, age);
    cout << "Your age is: " << age << " year olds.";

    return 0;
}