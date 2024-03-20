#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *nextPrt;
};

typedef struct Node* node;

node makeNode(int x) {
    node temp = new Node();
    temp->data = x;
    temp->nextPrt = nullptr;
    return temp;
}

bool is_empty(node a) {
    return a == nullptr;
}

int Size(node a) {
    int count = 0;
    while (a != nullptr) {
        count++;
        a = a->nextPrt;
    }

    return count;
}

int main() {
    node head = nullptr;
    cout << sizeof(Node) << endl;

    return 0;
}