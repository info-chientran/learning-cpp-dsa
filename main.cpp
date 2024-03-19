#include <iostream>
#include <queue>

using namespace std;

void printQ(queue<int> list) {
    queue<int> myList = list;

    while (!myList.empty()) {
        cout << myList.front() << " ";
        myList.pop();
    }

    cout << endl;
}

int main() {
    queue<int> list;

    for (int i = 0; i < 5; ++i) {
        list.push(i + 1);
    }

    cout << "Empty:" << endl;
    cout << list.empty() << endl;

    cout << "Length:" << endl;
    cout << list.size() << endl;

    cout << "First element of the queue: " << list.front() << endl;

    cout << "Last element of the queue: " << list.back() << endl;

    cout << "Delete fist element (" << list.front() <<  "):" << endl;
    list.pop();

    cout << "Element of queue: " << endl;
    printQ(list);

    return 0;
}