#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

/*void athead(node *&head,int value)			//insertion at beginning -single linked list
{
	node *newnode=new node;
	newnode->data=value;
	newnode->next=head;
	head=newnode;
}*/

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
	node *tail=NULL;						//-------- 1 
	int n,value;
	cout<<"Number of nodes:";
	cin>>n;
	cout<<"Enter "<<n<<" data";
	for(int i=1;i<=n;i++)
	{
		cin>>value;
		node *newnode=new node;				//creating new node
		newnode->data=value;				//assigning data for new node
		newnode->next=NULL;					//assigning NEXT ptr as NULL for new node
		
		if(head==NULL)						//from-----1
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
	
	/*int newd;
	cout<<"enter data to be at first: ";
	cin>>newd;
	athead(head,newd);
	cout<<"Node after insertion:"<<endl;
	display(head);*/
	
	
	
}
