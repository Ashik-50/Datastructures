#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void push(Node**head,int data){
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=*head;
    *head=new_node;
}

void insert_after(Node* prev_node,int data) {
    if (prev_node == NULL) {
        cout << "The given previous node cannot be null"<<endl;
        return ;
    }
    Node* new_node=new Node();
    new_node->data = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node; 
}

void printList(Node* head) {
    while(head!=nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void append(Node* head,int data){
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=nullptr;
    if(head==nullptr) {
        head=new_node;
    }
    Node *last=head;
    while(last->next!=nullptr){
        last=last->next;
    }
    last->next=new_node;
}

void reverseList(Node** head){
    Node* prev=nullptr;
    Node* current=*head;
    Node* next=nullptr;
    while(current!=nullptr){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
}

int main(){
    Node* head=nullptr;
    cout<<"Enter the Number of elements : ";
    int n,data;cin>>n;
    cout<<"Enter the data  elements : ";
    for(int i=1;i<=n;i++){
        cin>>data;
        push(&head,data);
    }
    cout<<"Linked List After Insertion : "<<endl;
    printList(head);
    cout<<"Enter the position to insert after : ";
    int z,x;cin>>z;
    cout<<"Enter the element : ";
    cin>>x;
    Node* temp=head;
    for(int i=1;i<z;i++){
        temp=temp->next;
    }
    insert_after(temp,x);
    cout<<"Linked List After Inseting : "<<endl;
    printList(head);
    cout<<"Enter the element to be inserted at the end : ";
    int a;cin>>a;
    append(head,a);
    cout<<"Linked List After Appending : "<<endl;
    printList(head);
    cout<<"Linked List after reversing : "<<endl;
    reverseList(&head);
    printList(head); 
    return 0;
}