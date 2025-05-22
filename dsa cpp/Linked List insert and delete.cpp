#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int n;
    cout<<"Enter no of nodes: ";
    cin>>n;
    
    node *head=new node();
    int in;
    
    cout<<"Enter node-1: ";
    cin>>in;
    head->data=in;
    head->next=NULL;
    cout<<endl;
    
    node *old=head;
    
    
    for(int i=1;i<=n-1;i++)
    {
        cout<<"Enter node-"<<i+1<<": ";
        int val;
        cin>>val;
        
        node *ne=new node();
        ne->data=val;
        ne->next=NULL;
        
        old->next=ne;
        old=old->next;
        cout<<endl;
    }
    cout<<old->data<<"----last node"<<endl;
    cout<<"The Linked List is: ";
    node *current=head;
    
    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
    
    node *trav=head;
    int key;
    cout<<"Element to be deleted: ";
    cin>>key;
    cout<<endl;
    
    if(head->data==key)
    {
        node *del=head;
        head=head->next;
        delete del;
    }
    
    else
    {
        while(trav!=NULL)
        {
            if(trav->next->data==key)
            {
                node *del=trav->next;
                trav->next=trav->next->next;
                delete del;
            }
            trav=trav->next;
        }
    }
    
    cout<<"The Linked List is: ";
    current=head;
    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current=current->next;
    }  
    
    
    
}
