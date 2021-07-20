#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
    // int key;
	Node* next;
};

void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node =new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

// bool serach(Node* head,int x){
//     Node* current = head;

//     while (current != NULL)
//     {
//         if(current->data==x){
//             return true;
//         }
//         current=current->next;
//     }
//     return false;
// }

//recursive 
bool search(Node* head, int x)
{
    // Base case
    if (head == NULL)
        return false;
     
    // If key is present in current node, return true
    if (head->data == x)
        return true;
 
    // Recur for remaining list
    return search(head->next, x);
}



int main()
{
	Node* head = NULL;
    // int x = 21;
	push(&head, 1);
	push(&head, 3);
	push(&head, 1);
	push(&head, 2);
	push(&head, 1);
    push(&head, 21);

    search(head, 21)? cout<<"Yes" : cout<<"No";
	
	return 0;
}

