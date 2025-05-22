#include<iostream>
using namespace std;

// Structure of Node
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Function to insert element at front
void insertFront(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_ref);
    if (*head_ref != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}

// Function to insert element at end
void insertEnd(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    new_node->prev = last;
}

// Function to insert element at a particular position
void insertPos(Node** head_ref, int new_data, int pos) {
    if (pos == 1) {
        insertFront(head_ref, new_data);
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    Node* temp = *head_ref;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;
    if (temp == NULL) {
        cout << "Invalid position" << endl;
        return;
    }
    
    cout<<"Node Inserted"<<endl;
    new_node->next = temp->next;
    temp->next = new_node;
    new_node->prev = temp;
    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}

// Function to display the doubly linked list
void displayList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    int choice = 0, data = 0, pos = 0;
    while (choice != 5) {
        cin >> choice;
        switch (choice) {
        case 1:
            
            cin >> data;
            insertFront(&head, data);
            break;
        case 2:
            
            cin >> data;
            insertEnd(&head, data);
            break;
        case 3:
        
            cin >> pos;
            
            cin >> data;
            insertPos(&head, data, pos);
            break;
        case 4:
            displayList(head);
            break;
        case 5:
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
        }
    }
    return 0;
}

