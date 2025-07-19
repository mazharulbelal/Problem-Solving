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


void print_linked_list(Node * &head)
{
    Node* temp = head;

    while( temp != NULL) 
    {
        cout << temp->value << endl;
        temp = temp->next;

    }
}

void insert_any_pos(Node * &head, int val, int idx)
{
    Node * temp = head;
    Node * newNode = new Node(val);
    for (int i = 1; i<idx; i++)
    {
       temp = temp->next; 
    }

    newNode->next = temp->next->next;
    temp->next = newNode;

}

void add_tail(Node * &tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    tail = newNode;
}

int main() {
    
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* b = new Node(300);
    Node* c = new Node(400);
    Node* d = new Node(600);
    Node* tail = d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    

    insert_any_pos(head, 555, 0);
    add_tail(tail, 22);

    print_linked_list(head);
    



}