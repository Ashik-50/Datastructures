#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void push(Node** head,int data){
    Node* new_node=new Node();
    new_node->data = data;
    new_node->next = *head;
    *head=new_node;
}

bool search(Node* head,int  key) { 
    Node* current = head;    
    if (head == NULL) return false;
    if (head->data == key) return true;
    return search(head->next,key);
}

void print(Node* node) {
    while(node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int count(Node* node){
    int count=0;
    while(node!=nullptr){
        count++;
        node=node->next;
    }
    return count;
}

int main(){
    Node* head=nullptr;
    cout<<"Enter the nuber of elements : ";
    int n;cin>>n;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        int a;cin>>a;
        push(&head,a);
    }
    cout<<"Elements are :";
    print(head);cout<<endl;
    cout<<"The Count of the elements : "<<count(head)<<endl;
    cout<<"Enter the element to be searched  : ";
    int x;cin>>x;
    if (search(head,x))
    	cout<<"Element is present in LinkedList."<<endl;
    else
    	cout<<"Element is not present in LinkedList."<<endl;
}