#include <iostream>
using namespace std;

void getArr(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << "Enter arr[" << i << "]: " << endl;
        cin >> arr[i];
    }
}

void printArr(int arr[], int length) {
    cout << "Array: " << endl;

    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void getItem(const int arr[], int length, int target) {
    int count = 0;

    for (int i = 0; i < length; ++i) {
        if (arr[i] == target) {
            ++count;
        }
    }

    if (count) {
        cout << "The element appears in the array: " << count << " times" << endl;
    } else {
        cout << "There are no elements in the array" << endl;
    }
}

int main() {
    int arr[10];
    int length = sizeof(arr) / sizeof(int);

    getArr(arr, length);

    printArr(arr, length);

    getItem(arr, length, 4);

    return 0;
}