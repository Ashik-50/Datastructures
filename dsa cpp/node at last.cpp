#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

int atlast(node *&head,node*&tail,int value)
{
	node *newnode=new node;
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

void display(node *head)
{
	node *current=head;
	while(current!=NULL)
	{
		cout<<current->data<<" ";
		current=current->next;
	}
}

int main()
{
	node *head=NULL;
	node *tail=NULL;	
	
	atlast(head,tail,3);
	atlast(head,tail,8);
	atlast(head,tail,5);
	atlast(head,tail,9);
	display(head);
}

