#include <iostream>
#include <vector>

using namespace std;

int maxProductOfAdjacentElements(const vector<int>& arr) {
    if (arr.size() < 2) {
        return -1;
    }
    int maxProduct = arr[0] * arr[1];
    for (size_t i = 1; i < arr.size() - 1; i++) {
        int currentProduct = arr[i] * arr[i + 1];
        maxProduct = max(maxProduct, currentProduct);
    }
    return maxProduct;
}
int main() {
    vector<int> numbers = {3, -5, 2, 9, -4};
    int result = maxProductOfAdjacentElements(numbers);
    if (result != -1) {
        cout << "The maximum product of adjacent is: " << result;
    } else {
        cout << "Array does not have enough elements to form a pair.";
    }
    return 0;
}