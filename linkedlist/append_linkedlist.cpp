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

void appendlist(Node** head_ref,int new_data){
    Node* new_node = new Node();
    // Used in step 5
    Node *last = *head_ref;
    // 2. Put in the data
    new_node->data = new_data;

    new_node->next=NULL;

    if(head_ref == NULL)
    {
        *head_ref = new_node; 
        return;
    }

    while (last->next != NULL) 
        last = last->next; 
   
    // 6. Change the next of last node
    last->next = new_node; 
    return; 
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

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    printlist(head);
    appendlist(&head,10);
    appendlist(&head,20);
    cout<<"\n";
    printlist(head);

    return 0;
}
