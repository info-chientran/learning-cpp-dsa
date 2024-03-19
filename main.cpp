#include <iostream>
using namespace std;

void reversesString(char reversedBuffer[], char buffer[]) {
    cout << "Enter a string to be reversed :" << endl;
    cin >> buffer;

    for(int i = 0; i <= 10; i++){
        reversedBuffer[i] = buffer[10 - i];
    }
}

void printString(char reversedBuffer[]) {
    cout << "reversed string: ";

    for(int i = 0; i <= 10; i++){
        cout << reversedBuffer[i];
    }

    cout << endl;
}

int main(){
    char reversedBuffer[10], buffer[10];

    reversesString(reversedBuffer, buffer);
    printString(reversedBuffer);

    return 0;
}