#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    void rec(ListNode* temp1) {
        if (temp1 == NULL) return;
        cout << temp1->val << " ";
        rec(temp1->next);
    }

public:
    void printList(ListNode* head) {
        rec(head);
        cout << endl;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Logic can be added here later
        return nullptr;
    }
};

// Helper function to create a linked list from array
ListNode* createList(int arr[], int size) {
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for(int i = 1; i < size; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}









int rec(ListNode* temp1, int mul)
{
    if (temp1 == NULL)
    {
        return 0;
    }


    int currentValue = temp1->val * mul;        
    int restValue = rec(temp1->next, mul * 10);  
    int total = currentValue + restValue;  

    return total;
   
   
 }


int main() {
    int arr1[] = {2, 4, 3};
    int arr2[] = {5, 6, 4};
    
    ListNode* l1 = createList(arr1, 3);
    ListNode* l2 = createList(arr2, 3);


    ListNode* result = NULL;
    ListNode* head = NULL;
    ListNode* tail = NULL;

   int sum =  rec(l1, 1) + rec(l2, 1);
   cout << sum << endl; 
  

   while (sum > 0) {
    int digit = sum % 10;

 ListNode* newNode =  new ListNode(digit);

 if (result == NULL)
 {
    head = newNode;

 }
 else
 {
    head->next = newNode;
    tail = newNode;

 }

    sum /= 10;
}
    
    
    return 0;
}
