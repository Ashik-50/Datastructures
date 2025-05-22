#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

void insert(node*& head, node*& tail, int data) {
    node* newnode = new node;
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = tail->next;
    }
}

void display(node* head) {
    node* current = head;

    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void position(node*& head, int pos, int k) {
    node* ptr = head;
    node* mid = new node;
    mid->data = k;

    for (int i = 1; i < pos - 1; i++) {
        ptr = ptr->next;
    }

    mid->next = ptr->next;
    ptr->next = mid;
}

void deleteNode(node*& head, int pos) {
    if (head == NULL)
        return;

    if (pos == 1)
    {
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    node* prev = head;
    for (int i = 1; i < pos - 1; i++) {
        prev = prev->next;
        if (prev == NULL || prev->next == NULL)
            return;
    }

    node* temp = prev->next;
    prev->next = temp->next;
    delete temp;
}

int main() {
    node* head = NULL;
    node* tail = NULL;

    int n;
    cout << "Enter no of nodes: ";
    cin >> n;

    cout << "Enter " << n << " nodes" << endl;

    int data;

    for (int i = 1; i <= n; i++) {
        cin >> data;
        insert(head, tail, data);
    }

    cout << "Linked List" << endl;
    display(head);
    cout << endl;

    int pos;
    cout << "Position of node to delete? : ";
    cin >> pos;

    deleteNode(head, pos);

    cout << "After deletion" << endl;
    display(head);

    return 0;
}

