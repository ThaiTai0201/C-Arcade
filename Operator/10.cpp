#include <iostream>

using namespace std;

class sophuc
{
    int a, b, c;

public:
    sophuc() {}
    void getvalue()
    {
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        
    }

    void operator++()
    {
        ++a;
        ++b;
    }

    void operator--()
    {
        --a;
        --b;
    }

    void display()
    {
        cout << a << "+\t" << b << "i" << endl;
    }
};

int main()
{

    sophuc obj;
    obj.getvalue();
    ++obj;
    cout << "So phuc tang la \n";
    obj.display();
    obj.getvalue();
    --obj;
    cout << "So phuc giam la \n";
    obj.display();
    return 0;
}
