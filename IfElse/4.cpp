#include <iostream>
using namespace std;

struct AverageGrades {
    float testGrades;
    float midSemesterGrades;
    float finalSemesterGrades;
    float averageGrades;
};

void inputGrades(AverageGrades &averageGrades) {
    cout << "Input your test grades: ";
    cin >> averageGrades.testGrades;
    cout << "Input your mid-semester grades: ";
    cin >> averageGrades.midSemesterGrades;
    cout << "Input your final semester grades: ";
    cin >> averageGrades.finalSemesterGrades;
}

void outputGrades(AverageGrades averageGrades) {
    averageGrades.averageGrades = (averageGrades.testGrades + averageGrades.midSemesterGrades + averageGrades.finalSemesterGrades) / 3;
    cout << "---------------------------------" << endl;
    cout << "Your GPA is: " << averageGrades.averageGrades << endl;
    if (averageGrades.averageGrades >= 9.0) {
        cout << "Your rank is A";
    }
    else if (averageGrades.averageGrades >= 7.0 && averageGrades.averageGrades < 9.0) {
        cout << "Your rank is B";       
    }
    else if (averageGrades.averageGrades >= 5.0 && averageGrades.averageGrades < 7.0) {
        cout << "Your rank is C";       
    }
    else {
        cout << "Your rank is F";       
    }
}

int main() {
    AverageGrades averageGrades;
    inputGrades(averageGrades);
    outputGrades(averageGrades);

    return EXIT_SUCCESS;
}
