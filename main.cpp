#include <iostream>
#include <list>
#include <string>
using namespace std;

template<typename T>
void instructions() {
    cout << "Enter your choice:\n"
         << "1 to push to front\n"
         << "2 to push to back\n"
         << "3 to pop from front\n"
         << "4 to pop from back\n"
         << "5 to exit\n";
}

template<typename T>
void printList(const list<T>& listObject) {
    cout << "Elements in the list:\n";
    for (const auto& element : listObject) {
        cout << element << " ";
    }
    cout << endl;
}

template<typename T>
void testList(list<T>& listObject, const string& typeName) {
    cout << "Testing a list of " << typeName << " values\n";
    instructions<T>();

    int choice;
    T value;

    do {
        cout << "? \n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter " << typeName << ": " << endl;
                cin >> value;
                listObject.push_front(value);
                cout << "Size: " << listObject.size() << endl;
                break;
            case 2:
                cout << "Enter " << typeName << ": " << endl;
                cin >> value;
                listObject.push_back(value);
                cout << "Size: " << listObject.size() << endl;
                break;
            case 3:
                if (!listObject.empty()) {
                    value = listObject.front();
                    listObject.pop_front();
                    cout << value << " removed from list\n";
                    cout << "Size: " << listObject.size() << endl;
                } else {
                    cout << "List is empty\n";
                }
                break;
            case 4:
                if (!listObject.empty()) {
                    value = listObject.back();
                    listObject.pop_back();
                    cout << value << " removed from list\n";
                    cout << "Size: " << listObject.size() << endl;
                } else {
                    cout << "List is empty\n";
                }
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice, please try again\n";
                break;
        }
        printList(listObject);
    } while (choice != 5);

    cout << "End list test\n\n";
}

int main() {
    list<int> intList;
    testList(intList, "int");
    return 0;
}
