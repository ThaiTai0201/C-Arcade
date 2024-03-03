/*Given a sequence of integers as an sequenceay, determine whether it is possible to obtain a strictly increasing
sequence by removing no more than one element from the sequenceay.
Note: sequence a0, a1, ..., an is considered to be a strictly increasing if a0 < a1 < ... < an.
Sequence containing only one element is also considered to be strictly increasing.*/

/*Cho một dãy số nguyên như một mảng, xác định xem nó có đạt được là một dãy tăng nghiêm ngặt bằng cách chỉ
loại bỏ một phần tử trong dãy không
Chú thích: dãy a0, a1, ... ,an được xem là tăng nghiêm ngặt nếu a0 < a1 < ... < an. Dãy chỉ gồm 1 phần tử cũng
được xem là dãy tăng nghiêm ngặt*/
#include <iostream>
#include <vector>

using namespace std;

bool canObtainIncreasingSequence(const vector<int>& arr) {
    if (arr.size() <= 1) {
        return true; // Sequence containing only one element is considered strictly increasing
    }

    int removeElement = 0; // Count of elements to remove

    for (size_t i = 1; i < arr.size(); ++i) {
        // If the current element is less than or equal to the previous one
        if (arr[i] <= arr[i - 1]) {
            // Check if we've already removed an element
            if (removeElement == 1) {
                return false; // Cannot obtain increasing sequence by removing more than one element
            }
            // If we haven't removed an element yet,
            // check if removing the current or previous element creates a strictly increasing sequence
            if (i < 2 || arr[i] > arr[i - 2]) {
                // If removing the current element results in a strictly increasing sequence
                // Increment removeElement and continue to the next iteration
                removeElement++;
                continue;
            }
            if (i + 1 == arr.size() || arr[i + 1] > arr[i - 1]) {
                // If removing the previous element results in a strictly increasing sequence
                // Increment removeElement and continue to the next iteration
                removeElement++;
                continue;
            }
            // If removing either the current or previous element doesn't result in a strictly increasing sequence
            // Return false
            return false;
        }
    }

    // If we've traversed the array without enremoveElementering more than one non-increasing pair,
    // or if the array is already strictly increasing, return true
    return true;
}

int main() {
    // Example usage
    vector<int> arr1 = {1, 3, 2, 1}; // Removing one element (3) results in increasing sequence
    vector<int> arr2 = {1, 3, 2};    // Removing one element (3) results in increasing sequence
    vector<int> arr3 = {1, 2, 1, 2}; // Removing one element (1 or 2) results in increasing sequence
    vector<int> arr4 = {1, 4, 10, 4, 2}; // Cannot obtain increasing sequence by removing one element

    cout << boolalpha; // Print boolean values as true/false
    cout << "Can obtain increasing sequence for arr1: " << canObtainIncreasingSequence(arr1) << endl;
    cout << "Can obtain increasing sequence for arr2: " << canObtainIncreasingSequence(arr2) << endl;
    cout << "Can obtain increasing sequence for arr3: " << canObtainIncreasingSequence(arr3) << endl;
    cout << "Can obtain increasing sequence for arr4: " << canObtainIncreasingSequence(arr4) << endl;

    return 0;
}


