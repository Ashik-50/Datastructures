#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *left;
	node *right;
};

node *newnode(int data)
{
	node *newnode=new node;
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

node *insert(node *root,int data)
{
	if(root==NULL)
	{
		return newnode(data);
	}
	
	else if(data<root->data)
	{
		root->left=insert(root->left,data);
	}
	
	else if(data>root->data)
	{
		root->right = insert(root->right, data);
	}
	
	return root;
}

void infix(node *root)
{
	if(root==NULL)
	{
		return;
	}
	
	infix(root->left);
	cout<<root->data<<" ";
	infix(root->right);
}

int main()
{
	int n;
	cout<<"enter the value";
	node *root=NULL;
	
	int data;
	while(cin>>data && data>0)
	{
		root=insert(root,data);
	}
	
	cout<<"infix is"<<endl;
	infix(root);
}
