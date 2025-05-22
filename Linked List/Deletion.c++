#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
};

void push(Node**head,int data){
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=*head;
    *head=new_node;
}

void printList(Node* head) {
    while(head!=nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void deleteNode(Node** head, int data) {
    Node* temp = *head;
    Node* prev = nullptr;
    if (temp != nullptr && temp->data == data) {
        *head = temp->next;
        delete temp;
        return;
    }
    while (temp != nullptr && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == nullptr) return;
    prev->next = temp->next;
    delete temp;
}

void deleteAtPosition(Node **head ,int pos) {
    if (*head == nullptr) return;
    Node* temp=*head;
    if(pos==0){
        *head=temp->next;
        delete temp;
        return;
    }
    for(int i=0;temp!=nullptr&&i<pos-1;i++){
        temp=temp->next;
    }
    if(temp==nullptr||temp->next==nullptr) return;
    Node*next_node=temp->next->next;
    delete temp->next;
    temp->next=next_node;
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
    cout<<"Enter the data to be deleted : ";
    int z;cin>>z;
    deleteNode(&head,z);
    cout<<"Enter the position to be deleted : ";
    int a;cin>>a;
    deleteAtPosition(&head,a);
    cout<<"The Linked List after Deletion is : ";
    printList(head);
    return 0;
}