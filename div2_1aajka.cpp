#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
}; 
void MorrisTraversal(struct Node* root)
{
	if(root==NULL)
	return ;
	
	Node* curr=root; 
	while(!curr)
	{
		if(curr->left==NULL)
		{
			inorder.push_back(curr->val);
			curr=curr->right;
		}		
		else
		{
			Node* prev=curr->left;
			while(prev->right && prev->right!=curr)
			{
				prev=prev->right;
			}
			if(prev->right==NULL)
			{
				prev->right=curr;
				curr=curr->left;
			}
			else//prev=>right==curr   // threading to other node
			{
				prev->right=NULL;
				inorder.push_back(curr.val);
				curr=curr->right;
			}
			
		}
	}
}
struct Node* newnode(int data)
{
	struct Node* node-new node;
	node->data=data;
	node* left=NULL;
	node* right=NULL;
}
int main()
{
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	MorrisTraversal(root);
	return 0;
}
