#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int value;
    node *next;
    
};

int display (node *head)
{
    while(head!=0)
    {
        cout<<head->value<<" ";
        head=head->next;
    }
}

int main()
{
    node *head;
    node *one;
    node *two;
    node *three;
    node *four;
    
    one = new node();
    two = new node();
    three = new node();
    four = new node();
    
    one->value=7;
    two->value=2;
    three->value=9;
    four->value=5;
    
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=0;
    
    head=one;
    
    display(head);
    
}
