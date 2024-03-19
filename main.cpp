#include <iostream>
using namespace std;

void insertionSort(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        int x = arr[i]; 
        int pos = i - 1;

        while (pos >= 0 && x < arr[pos]) {
            arr[pos + 1] = arr[pos];
            --pos;
        }

        arr[pos + 1] = x;
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

    insertionSort(arrPrt, length);

    printArr(arrPrt, length);

    delete[] arrPrt;
    return 0;
}