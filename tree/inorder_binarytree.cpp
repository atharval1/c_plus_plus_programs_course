#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node *left, *right;
	Node(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};


void inorder(struct Node* node)
{
	if (node == NULL)
        return;
 
    inorder(node->left);

    cout << node->data << " ";

    inorder(node->right);
}

int main()
{
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

	cout << "\ninorder traversal of binary tree is \n";
	inorder(root);

	return 0;
}
