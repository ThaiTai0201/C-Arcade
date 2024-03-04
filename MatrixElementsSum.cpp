#include <iostream>

using namespace std;

const int MAX_ROWS = 100; // Số hàng tối đa
const int MAX_COLS = 100; // Số cột tối đa

int totalCost(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols){
    int totalSum = 0;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            // Nếu phòng không miễn phí
            if (matrix[i][j] != 0){
                // Cộng giá trị phòng vào tổng
                totalSum += matrix[i][j];
            }

            // Nếu phòng miễn phí
            if (matrix[i][j] == 0){
                // Đánh dấu các phòng bên dưới là không phù hợp
                for (int k = i + 1; k < rows; k++){
                    matrix[k][j] = 0;
                }
            }
        }
    }
    return totalSum;
}

int main(){
    int matrix[MAX_ROWS][MAX_COLS] = {
        {1, 2, 3},
        {0, 4, 5},
        {6, 0, 7}};
    int rows = 3;
    int cols = 3;
    cout << "Total cost of suitable rooms: " << totalCost(matrix, rows, cols) << endl;
    return 0;
}
