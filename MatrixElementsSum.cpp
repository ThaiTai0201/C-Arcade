#include <iostream>
#include <vector>

using namespace std;

int solution(vector<vector<int>>& matrix) {
    int totalSum = 0;

    for (size_t i = 0; i < matrix.size(); i++) {
        for (size_t j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] > 0 && matrix[i - 1][j] > 0) {
                totalSum += matrix[i][j];
            }
        }
    }
    return totalSum;
}
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 0},
        {0, 5, 6, 0},
        {7, 8, 9, 10}
    };

    int totalSum = solution(matrix);

    cout << "Total sum of suitable rooms: " << totalSum << endl;

    return 0;
}