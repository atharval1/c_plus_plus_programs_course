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

void deletenode(Node** head_ref,int key){
    Node* temp = *head_ref;
    Node* prev = NULL;

    if(temp != NULL && temp->data==key){
        *head_ref = temp->next;
        delete temp;
        return;
    }
    else
    {
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
 
    // If key was not present in linked list
    if (temp == NULL)
        return;
 
    // Unlink the node from linked list
    prev->next = temp->next;
 
    // Free memory
    delete temp;
    }
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
    deletenode(&head, 1);
    cout<<"After deleted a node \n ";
    printlist(head);
    return 0;
}
