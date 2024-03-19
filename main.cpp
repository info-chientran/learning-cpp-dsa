#include <iostream>
using namespace std;

void selectionSort(int arr[], int length) {
    for (int i = 0; i < length - 1; ++i) {
        int minPos = i;

        for (int j = i + 1; j < length; ++j) {
            if (arr[j] < arr[minPos]) {
                minPos = j;
            }
        }
        
        swap(arr[i], arr[minPos]);
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

    selectionSort(arrPrt, length);

    printArr(arrPrt, length);

    delete[] arrPrt;
    return 0;
}