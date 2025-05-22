#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
void push(node** head,int data){
    node* newnode=new node();
    newnode->data=data;
    newnode->next=*head;
    *head=newnode;
}
void print(node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void reverse(node** head){
    node* prev=nullptr;
    node* current=*head;
    node* next=nullptr;
    while(current!=nullptr){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
}
void append(node* head,int data){
    node* newnode=new node();
    newnode->data=data;
    newnode->next=nullptr;
    if(head==nullptr) head=newnode;
    node* last=head;
    while(last->next!=nullptr){
        last=last->next;
    }
    last->next=newnode;
}
void insertafter(node* head,int pos,int data){
    node* temp=head;
    for(int i=1;i<pos;i++){
        temp=temp->next;
    }
    node* newnode=new node();
    newnode->data=data;
    newnode->next=temp->next;
    temp->next=newnode;
}

int main(){
    node* head=nullptr;
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        push(&head,a);
    }
    cout<<"The inserted data : ";
    print(head);
    cout<<"\nThe reversed data : ";
    reverse(&head);
    print(head);
    int z;
    cout<<"\nEnter the data to be inserted at last : ";
    cin>>z;
    append(head,z);
    cout<<"After appending the data : ";
    print(head);
    cout<<"\nEnter the position to insert after : ";
    int x;cin>>x;
    cout<<"Enter the data to be inserted : ";
    int y;cin>>y;
    insertafter(head,x,y);
    cout<<"The list after insertion : ";
    print(head);

}