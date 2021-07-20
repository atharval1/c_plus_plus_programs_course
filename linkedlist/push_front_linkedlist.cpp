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

void push(Node** head_ref,int new_data){
    Node* new_node = new Node();

    new_node->data=new_data;
    new_node->next= (*head_ref);
    (*head_ref) = new_node;
    printlist(*head_ref);
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
    cout<<endl;
    push(&head,10);

    return 0;
}
