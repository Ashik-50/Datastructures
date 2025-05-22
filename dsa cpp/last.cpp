#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

void atlast(node *&head,int value)
{
	node *newnode=new node;
	node *temp=head;
	newnode->data=value;
	newnode->next=NULL;
	while(temp->next!=0)
	{
		temp=temp->next;		
	}
	temp->next=newnode;
	head=temp;
}

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
	cout<<"Number of nodes:";
	cin>>n;
	cout<<"Enter "<<n<<" data";
	for(int i=1;i<=n;i++)
	{
		cin>>value;
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
	
	cout<<"Node before insertion:"<<endl;
	display(head);
	
	int newd;
	cout<<"enter data to be at last: ";
	cin>>newd;
	atlast(head,newd);
	cout<<"Node after insertion:"<<endl;
	display(head);
	
	
	
}
