#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

void printlist(Node* n){
    while (n != NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}

int decimalValue(Node *head)
{
    // Initialized result
    int res = 0;
 
    // Traverse linked list
    while (head != NULL)
    {
        // Multiply result by 2 and add
        // head's data
        res = (res << 1) + head->data;
 
        // Move next
        head = head->next;
    }
    return res;
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();


    head->data=1;
    head->next = second;

    second->data=1;
    second->next=third;

    third->data=1;
    third->next=NULL;

    printlist(head);
     cout << "\nDecimal value is : "<< decimalValue(head);
    return 0;
}
