#include <iostream>
using namespace std;

struct node {
    int data;
    node* prev;
    node* next;
};

void display(node *head,node* tail) {
    node* current = tail;//for reverse...use head for forward
    while (current != NULL) {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
}

int main() {
    node* head = NULL;
    node* tail = NULL;
    int n, value;
    cout << "Number of nodes: ";
    cin >> n;
    cout << "Enter " << n << " data: ";
    for (int i = 1; i <= n; i++) {
        cin >> value;
        node* newnode = new node;
        newnode->data = value;
        newnode->prev = NULL;
        newnode->next = NULL;

        if (head == NULL)
		{
            head = newnode;
            tail = newnode;
        } 
		
		else 
		{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    display(head,tail);

    return 0;
}

