#include <iostream>

using namespace std;

class soPhuc {
            int a, b;
    public:
            void getValue() {
                cout << "Nhap 2 so a va b: " << endl;
                cin >> a >> b;
            }
            soPhuc operator+(soPhuc obj) {
                soPhuc t;
                t.a = a + obj.a;
                t.b = b + obj.b;
                return(t);
            }
            soPhuc operator-(soPhuc obj)
            {
                soPhuc t;
                t.a = a - obj.a;
                t.b = b - obj.b;
                return(t);
            }
            void display()
            {
                cout << a << " + " << b << "i" << endl;
            }
};

int main()
{
    soPhuc obj1, obj2, result1, result2;

    obj1.getValue();
    obj2.getValue();

    result1 = obj1 + obj2;
    result2 = obj1 - obj2;

    cout<<"Gia tri nhap vao:" << endl;
    obj1.display();
    obj2.display();

    cout<<"Ket qua: " << endl;
    result1.display();
    result2.display();

    return EXIT_SUCCESS;
}