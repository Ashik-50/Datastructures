#include <iostream>
using namespace std;

// Node structure for the doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Insert at the front of the doubly linked list
void insertFront(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = head;

    if (head != nullptr) {
        head->prev = newNode;
    }
    
    head = newNode;
}

// Insert at the end of the doubly linked list
void insertEnd(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        newNode->prev = nullptr;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// Delete a node by value
void deleteNode(Node*& head, int key) {
    Node* temp = head;

    // If the list is empty
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    // If the node to be deleted is the head node
    if (head->data == key) {
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        delete temp;
        return;
    }

    // Traverse the list to find the node to delete
    while (temp != nullptr && temp->data != key) {
        temp = temp->next;
    }

    // If the node to delete was not found
    if (temp == nullptr) {
        cout << "Node with value " << key << " not found.\n";
        return;
    }

    // Unlink the node from the list
    if (temp->next != nullptr) {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != nullptr) {
        temp->prev->next = temp->next;
    }

    delete temp;
}

// Print the list forward
void printListForward(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Print the list backward
void printListBackward(Node* head) {
    if (head == nullptr) return;

    Node* temp = head;
    
    // Move to the last node
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Print in reverse order
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Insertion
    insertFront(head, 10);
    insertEnd(head, 20);
    insertFront(head, 5);
    insertEnd(head, 30);

    cout << "List printed forward: ";
    printListForward(head);  // Output: 5 10 20 30

    cout << "List printed backward: ";
    printListBackward(head);  // Output: 30 20 10 5

    // Deletion
    deleteNode(head, 20);
    cout << "After deleting 20, list printed forward: ";
    printListForward(head);  // Output: 5 10 30
}
