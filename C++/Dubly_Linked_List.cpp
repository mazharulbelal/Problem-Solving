#include <iostream>
using namespace std;


class Node
{
    public:
    int value;
    Node *next;
    Node *pre;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->next = NULL;

    }
};

void add_Tail(Node * &head, Node * &tail, int value)
{
    Node * newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return ;
    }

    else
    {
        tail->next = newNode;
        newNode->pre = tail;
        tail = newNode;

    }

}

void print_Link_List(Node *head)
{
    Node * temp = head;
    while (head != NULL)
    {
    cout << head->value << endl;
    head = head->next;
    }
}

void print_reverse(Node *head)
{
    if ( head == NULL)
    {
        return;
    }
    print_reverse(head->next);
    cout << head->value <<endl;
}

void add_head(Node * &head, Node * &tail, int val)
{
    Node * temp = head;
    Node * newNode = new Node(val);
    if (temp == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else 
    {
        newNode->next = head;
        head->pre = newNode;
        head = newNode;
    }
}

void delete_head(Node * &head)
{
    
    Node * temp = head;
    head = head->next;
    head->pre = NULL;
    delete temp;
    
}

void add_Any_Position(Node * &head, Node * tail, int value, int index)

{
    Node * temp = head;
    Node * newNode = new Node(value);
    if ( index == 0)
    {
        add_head(head, tail, value);
    }

    else
    {
        for(int i = 1; i < index; i++)
        {
            temp = temp->next;

        }
      //  cout << "->" <<temp->value<<endl;

        newNode->next = temp->next;
        temp->next->pre = newNode;
        temp->next = newNode;
        newNode->pre = temp;


    }
}

void deletePosition(Node * &head, int index)
{
    if (index == 0)
    {
        delete_head(head);
    }
    else {
    Node * temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
}

int main()
{

    Node * head = NULL;
    Node * tail = NULL;
    while(true)
    {
        int n;
        cin >> n;
        if ( n == -1)
        {
          break;
        }
        else
        {
            add_Tail(head, tail, n);
        }
    }
   
  // add_head(head, tail, 50);
   add_Any_Position(head, tail, 999,6);
   //deletePosition(head, 0);
 // print_reverse(head);

 print_Link_List(head);
 cout << "Current Head: " << head->value << endl;
 cout << "Current Tails: "<< tail->value << endl;
 


}