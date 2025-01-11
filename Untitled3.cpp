#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *left;
		node *right;
		node(int d)
		{
			this->data=d;
			this->left=NULL;
			this->right=NULL;	
		}
};
	node *buildtree(node* root)
		{
			cout<<"enter the data"<<endl;
			int data;
			cin>>data;
			root =new node (data);
		    if(data==-1)
			return NULL;
			cout<<"enter data to be entered in left "<<endl;
			root->left=buildtree(root->left);
			cout<<"enter data to be entered in right "<<endl;
			root->right=buildtree(root->right);
			return root;
		}
		void levelordertraversal(node *root)
		{
			queue <int> q;
			q.push(root);
			q.push(NULL);
			while(!q.empty())
			{
				node *temp=q.front();
				q.pop();
				if(temp==NULL)
				{
					cout<<endl;
					if(!q.empty())
					{
						q.push(NULL);
					}	
				}
				else
				{
					cout<<temp->data<<emdl;
					if(temp->left)
					{
						q.push(temp->left);
					}
					if(temp->right)
					{
						q.push(temp->left);
						
					}
				}
			}
		}
		// LEFT NODE RIGHT
		void inorder(node *root)
		{
			if(root==NULL)
			{
				return;
			}
			inorder(root->left);
			cout<<root->data<<" ";
			inorder(root->right);
		}
		// NODE LEFT  RIGHT
		void preorder(node *root)
		{
			if(root==NULL)
			{
				return;
			}
			cout<<root->data<<" ";
			preorder(root->left);
			preorder(root->right);
		}
		// LEFT RIGHT NODE
		void postorder(node *root)
		{
			if(root==NULL)
			{
				return ;
			}
			postorder(root->left);
			postorder(root->right);
			cout<<root->data<<" ";
		}
		void buildfromevelorder(node *root)
		{
			queue<node*>q;
			cout<<"enter the data"<<endl;
			int data;
			coutin>>data;
			root=new node(data);
			while(!q.empty())
			{
				node *temp=q.front();
				q.pop();
				cout<<"enter the left node data for "<<temp->data<<endl;
				int leftdata;
				cin<<leftdata;
				
				if(leftdata!=-1)
				{
					temp->left=new node(leftdata);
					q.push(temp->left);
				}
				
				cout<<"enter the right node data for "<<temp->data<<endl;
		        int rightdata;
				cin<<rightdata;
				if(rightdata!=-1)
				{
					temp->right=new node(rightdata);
					q.push(temp->right);
				}
			}
		}
		int main()
		{
			node *root=NULL;
//			root=buildtree(root);
//			cout<<"printing the level order traversal";
//			levelordertraversal(root);
//			cout<<"printing inorder traversal";
//			inorder(root);
//			cout<<"printing preorder traversal";
//			preorder(root);
//			cout<<"printing postorder traversal";
//			postorder(root);
            buildfromevelorder(root);
            
		}
		
		
