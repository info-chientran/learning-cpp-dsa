#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node()
    {
        data = 0;
        next = nullptr;
    }

    explicit Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Linkedlist {
    Node* head;

public:
    Linkedlist() { head = nullptr; }

    void insertNode(int);

    void printList();

    void deleteNode(int);
};

void Linkedlist::deleteNode(int nodeOffset)
{
    Node *temp1 = head, *temp2 = nullptr;
    int ListLen = 0;

    if (head == nullptr) {
        cout << "List empty." << endl;
        return;
    }

    while (temp1 != nullptr) {
        temp1 = temp1->next;
        ListLen++;
    }

    if (ListLen < nodeOffset) {
        cout << "Index out of range"
             << endl;
        return;
    }

    temp1 = head;

    if (nodeOffset == 1) {
        head = head->next;
        delete temp1;
        return;
    }

    while (nodeOffset-- > 1) {
        temp2 = temp1;
        temp1 = temp1->next;
    }

    temp2->next = temp1->next;
    delete temp1;
}

void Linkedlist::insertNode(int data) {
    Node* newNode = new Node(data);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void Linkedlist::printList() {
    Node* temp = head;

    if (head == nullptr) {
        cout << "List empty" << endl;
        return;
    }

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Linkedlist list;

    for (int i = 0; i < 50; ++i) {
        list.insertNode(i + 1);

    }

    list.deleteNode(48);

    list.printList();

    return 0;
}