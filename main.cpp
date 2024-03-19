#include <iostream>
using namespace std;

void relocate_print(int array[], int length){
    int num, index;
    cout << "Enter a number:" << endl;
    cin >> num;
    cout << "Enter index:" << endl;
    cin >> index;

    for(int u = length; u > index; u = u - 1){
        array[u] = array[u - 1];
    }

    array[index] = num;
}

void printArr(const int arr[], int length) {
    for(int i = 0; i <= length; i++){
        cout << arr[i] << endl;
    }
}


int main(){
    int arr[6]={1,2,3,4,5,6};
    int length = sizeof(arr) / sizeof(int);

    relocate_print(arr, length);

    printArr(arr, length);


    return 0;

}