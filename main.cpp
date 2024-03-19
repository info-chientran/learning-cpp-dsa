#include <iostream>
using namespace std;

void bubbleSort(int arr[], int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void getArr(int arr[], int length){
    for (int i = 0; i < length; ++i) {
        cout << "Enter array[" << i << "]: " << endl;
        cin >> arr[i];
    }

}

void printArr(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;
};

int main() {
    int length;

    cout << "Enter array length: " << endl;
    cin >> length;

    int *arrPrt = new int [length];

    getArr(arrPrt, length);

    bubbleSort(arrPrt, length);

    printArr(arrPrt, length);

    delete[] arrPrt;
    return 0;
}