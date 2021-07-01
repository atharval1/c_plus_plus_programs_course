#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Node 
{
    public:
        int data;
        Node *next;
};

void printlist(Node* n){
    while (n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
}

void pushnode(Node** head_ref, int new_data){
    // allocate the node
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
    printlist(new_node);
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

   head->data=11;
   head->next=second;

   second->data=22;
   second->next=third;

   third->data=33;
   third->next=NULL;


    cout<<"before insertion of node";   
    printlist(head);
    cout<<"\nAfter insertion of node ";
    pushnode(&head,55);
 
    return 0;
}
 