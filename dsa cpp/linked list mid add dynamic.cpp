// You are using GCC
#include<bits/stdc++.h>
using namespace std;

struct node //run in IamNeo IDE
{
	int data;
	node *next;
};

void insert(node *&head, node *&tail, int data)
{
	node *newnode = new node;
	newnode->data = data;
	newnode->next = NULL;

	if (head == NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		tail->next = newnode;
		tail = newnode;
	}
}

void atpos(node *&head,int pos,int key)
{
	node *newnode = new node;
	
	newnode->data=key;
	
	node *hold=head;
	
	for(int i=1;i<pos-1;i++)
	{
		hold=hold->next;
	}
	
	newnode->next=hold->next;
	hold->next=newnode;
}
void display(node *&head)
{
	node *current = head;

	while (current != NULL)
	{
		cout << current->data << " ";
		current = current->next;
	}
}

int main()
{
	node *head = NULL;
	node *tail = NULL;

	int n, data;
	cout << "Enter no of nodes: ";
	cin >> n;

	cout << "Enter " << n << " data" << endl;

	for (int i = 1; i <= n; i++)
	{
		cin >> data;
		insert(head, tail, data);
	}

	cout << "Linked List is: ";
	display(head);
	cout << endl;

	int key;
	cin >> key;

	 // Initialize the middle position

	for (int j = 1; j <= key; j++)
	{
		cin >> data;
		int l = (n / 2) + 1;
		

		/*if (n % 2 == 0)
		{
			l++; // Increment l for even number of nodes
		}*/
		
		if(n%2!=0)
		{
			l += 1; // Increment l for odd number of nodes
		}
		atpos(head, l, data);

		n++; // Increment total number of nodes

		cout << "Updated Linked List: ";
		display(head);
		cout << endl;
	}

	return 0;
}

