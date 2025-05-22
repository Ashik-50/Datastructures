#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
	node *prev;
};

void insert(node *&head,node *&tail,int data)
{
	node *newnode=new node;
	newnode->data=data;
	newnode->next=NULL;
	
	if(head==NULL)
	{
		head=newnode;
		tail=newnode;
	}
	
	else
	{
		tail->next=newnode;
		newnode->prev=tail;
		tail=tail->next;
	}
}

void atpos(node *&head,int pos,int key)
{
	node *newnode = new node;
	
	newnode->data=key;
	
	node *hold=head;
	
	for(int i=1;i<pos-1;i++)
	{
		hold=hold->next;
	}
	
	newnode->next=hold->next;
	hold->next=newnode;
}

void display(node *&head)
{
	node *current=head;
	
	while(current!=NULL)
	{
		cout<<current->data<<" ";
		current=current->next;
	}
}

void athead(node *&head,int key)
{
	node *newnode=new node;
	newnode->data=key;
    newnode->next=head;
    
    head=newnode;
}

void deletee(node *&head,int key)
{
	node *current=head;
	
	int n=1;
	
	while(current!=NULL)
	{
		if(n==key)
		{
			cout<<"";
			current=current->next;
		}
		
		else
		{
			cout<<current->data<<" ";
			current=current->next;
		}
		
		n++;
	}
}



int main()
{
	node *head=NULL;
	node *tail=NULL;
	
	int n;
	cout<<"Enter no of nodes ";
	cin>>n;
	
	cout<<"Enter "<<n<<" data"<<endl;
	
	for(int i=1;i<=n;i++)
	{
		int data;
		cin>>data;
		
		insert(head,tail,data);
	}
	
	cout<<" Linked List is ";
	display(head);
	cout<<endl;
	
	
	
	/*cout<<"Enter a value ";
	int key;
	cin>>key;
	
	
	
	athead(head,key);
	
	cout<<"After insert at head "<<endl;
	display(head);*/
	
	/*int k,pos;
	cout<<"enter a pos: ";
	cin>>pos;
	cout<<"enter value ";
	cin>>k;
	
	cout<<"After insert at "<<pos<<endl;
	atpos(head,pos,k);
	display(head);*/
	
	int key;
	cout<<"Position to be deleted ";
	cin>>key;
	
	cout<<"Linked List after deleting: ";
	deletee(head,key);
	
}
