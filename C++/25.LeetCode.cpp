#include <iostream>
using namespace std;


class ListNode
{
    public:
    int value;
    ListNode *next;
    ListNode(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void rev(ListNode * head)
{
    if (head == NULL)
    {
        return;
    }
    rev(head->next);
    cout << head->value << " " ;
    

}


int main()
{

    ListNode *head = new ListNode(1);      
    ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(3);
    ListNode *fourth = new ListNode(4);
    ListNode *fifth = new ListNode(5);

    // Step 2: Link the nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    ListNode* tempHead = NULL;
    ListNode* tempTail = NULL;

    int k = 2;

    

    rev(head);
    return 0;
    
  


}