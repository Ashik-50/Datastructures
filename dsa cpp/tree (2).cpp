#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *left;
	node *right;
};



node *create(node *root,int data)
{
	node *newnode=new node;
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	
	return newnode;
}



int sum(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	if(root->left==NULL && root->right==NULL)
	{
		return root->data;
	}
	
	return sum(root->left)+sum(root->right);
}



int height(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	int left=height(root->left);
	int right=height(root->right);
	
	return 1+max(left,right);
}

node *insert(node *root,int data)
{
	if(root==NULL)
	{
		return create(root,data);
	}
	
	else if(data < root->data)
	{
		root->left=insert(root->left,data);
	}
	
	else
	{
		root->right=insert(root->right,data);
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

void postfix(node *root)
{
	if(root==NULL)
	{
		return;
	}
	
	postfix(root->left);
	postfix(root->right);
	cout<<root->data<<" ";
}

void prefix(node *root)
{
	if(root==NULL)
	{
		return;
	}
	
	cout<<root->data<<" ";
	prefix(root->left);
	prefix(root->right);
}

int diameter(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	int l=height(root->left);
	int r=height(root->right);
	int left=diameter(root->left);
	int right=diameter(root->right);
	
	return max(l+r+1,max(left,right));
}

void in(node *root,vector <int> &v)
{
	if(root==NULL)
	{
		return;
	}
	
	in(root->left,v);
	v.push_back(root->data);
	in(root->right,v);
}

int kth(node *root,int k)
{
	vector<int>v;
	in(root,v);
	
	return v[k-1];
}

int main()
{
	node *root=NULL;
	
	int data;
	
	
	while(cin>>data && data>0)
	{
		root=insert(root,data);
	}
	
	
	cout<<"Sum of leaf nodes: "<<sum(root)<<endl;
	
	cout<<"Height: "<<height(root)<<endl;
	
	cout<<"Postfix: ";
	postfix(root);
	cout<<endl;
	
	cout<<"Infix: ";
	infix(root);
	cout<<endl;
	
	cout<<"Prefix: ";
	prefix(root);
	cout<<endl;
	
	cout<<"Diameter of Tree: "<<diameter(root)<<endl;
	
	cout<<"Enter a kth element to search ";
	int k;
	cin>>k;
	
    int ans = kth(root,k);
    
    cout<<"Kth small element: "<<ans;
	
	
	
	
}
