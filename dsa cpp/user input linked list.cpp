#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int value;
    node *next;
};

void add(node *&head,int data)
{
    node *newnode;
    newnode=new node();
    
    newnode->value=data;
    newnode->next=NULL;
    
    if(head==NULL)
    {
        head=newnode;
    }
    
    else
    {
        node *current=head;
        while(current->next!=0)
        {
            current=current->next;
        }
        current->next=newnode;
        
    }
    
}

void display(node *head)
{
    node *current=head;
    while(current!=0)
    {
        cout<<current->value<<" ";
        current=current->next;
    }
}

int main()
{
    node *head;
    int n,data;
    cout<<"Enter no of values : "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>data;
        add(head,data);
    }
    
    cout<<"The linked list is : "<<endl;
    display(head);
}


