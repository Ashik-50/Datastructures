#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

void display(node *head) {
	node *curr = head;
	do 
	{
		cout << curr->data << " ";
		curr = curr->next;
	} 
	while (curr != head);
	cout << endl;
}

int main() {
	node *head = NULL;
	node *tail = NULL;
	int n, value;
	cout << "Number of nodes: ";
	cin >> n;
	cout << "Enter " << n << " data: ";
	for (int i = 1; i <= n; i++) {
		cin >> value;
		node *newnode = new node;
		newnode->data = value;
		newnode->next = NULL;
		
		if (head == NULL) {
			head = newnode;
			tail = newnode;
			tail->next = head; // Making the last node point to the head to form a circular list
		}
		else {
			tail->next = newnode;
			tail = tail->next;
			tail->next = head; // Making the last node point to the head to form a circular list
		}
	}
	
	cout << "Circular Linked List: ";
	display(head);
	
	return 0;
}

