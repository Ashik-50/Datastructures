#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
};

void display(node *head)
{
	node *disp=head;
	while(disp!=0)
	{
		cout<<disp->data<<" ";
		disp=disp->next;	
	}	
}

int main()
{
	node *head=NULL;
	node *tail=NULL;
	int n,value;
	cout<<"Enter the no.of nodes you want: ";
	cin>>n;
	cout<<"Enter the values(data) of nodes: ";
	for(int i=1;i<=n;i++)
	{
		cin>>value;
		node *newnode = new node;
		newnode->data=value;
		newnode->next=NULL;
		
		if(head==NULL)
		{
			head=newnode;
			tail=newnode;
		}
		else
		{
			tail->next=newnode; 
			tail=tail->next;
		}
	}
display(head);
}
