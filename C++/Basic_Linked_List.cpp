#include <iostream>
using namespace std;


class Node {
    public:
    int value;
    Node* next;

    Node(int value) {
        this->value = value;
        this->next = NULL;
    }

};

int main() {
    Node a(10), b(20), c(30);

    // Make a Linked Bwtween all Nodes
    a.next = &b;
    b.next = &c;

    cout << "A Val: " << a.value << endl;
    cout << "B Val: " << a.next->value << endl;
    cout << "C Val: " << a.next->next->value << endl;

}