//inorder and insert
#include <stdio.h>
#include<stdlib.h> 
struct node 
{ 
	int key; 
	struct node *left, *right; 
}; 

// creating a new node 
struct node *newNode(int item) 
{ 
	struct node *temp = (struct node *)malloc(sizeof(struct node)); 
	temp->key = item; 
	temp->left = temp->right = NULL; 
	return temp; 
} 

void inorder(struct node *root) 
{ 
	if (root != NULL) 
	{ 
		inorder(root->left); 
		printf("%d \n", root->key); 
		inorder(root->right); 
	} 
}  

//insertion of node
struct node* insert(struct node* node, int key) 
{ 

	if (node == NULL) 
	 return newNode(key); 

	if (key < node->key) 
		node->left = insert(node->left, key); 
	else if (key > node->key) 
		node->right = insert(node->right, key); 


	return node; 
} 

int main()
{ 
	 struct node *root = NULL; 
    root = insert(root, 5); 
    insert(root, 10); 
    insert(root, 4); 
    insert(root, 7); 
    insert(root, 20); 
    insert(root, 6); 
    insert(root, 30); 
    inorder(root);
    return 0;
 
} 
