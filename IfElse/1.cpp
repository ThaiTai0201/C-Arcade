#include <iostream>

using namespace std;

struct Student {
    string name;
    int age;
};

void inputList(Student studentList[], int size) {
    cout << "Let's input student list!" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Fullname of student " << i+1 << " : ";
        cin >> studentList[i].name;
        cout << "Age of student " << i+1 << " : ";
        cin >> studentList[i].age;
    }
}

void outputList(Student studentList[], int size) {
    cout << endl << "Result check:" << endl;
    for (int i = 0; i < size; ++i) {
        if (studentList[i].age >= 16) {
            cout << "Student " << studentList[i].name << " is old enough to enter 10th grade!" << endl; 
        }
        else if (studentList[i].age < 16) {
            cout << "Student " << studentList[i].name << " is not old enough to enter 10th grade!" << endl;
        }
    }
}

int main() {
    const int size = 10; //User can change the value of size
    Student studentList[size];
    inputList(studentList, size);
    outputList(studentList, size);

    return EXIT_SUCCESS;
}