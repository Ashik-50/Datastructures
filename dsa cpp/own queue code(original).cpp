#include<bits/stdc++.h>
using namespace std;
#define size 10

int front=-1;
int rear=-1;
int arr[size];

void enqueue(int x)
{
	if(front==rear)
	{
		front=0;
		rear=0;
	}
	
	
	arr[rear]=x;
	cout<<"Enqueued element is "<<arr[rear]<<endl;
	rear++;
}

void dequeue()
{
	cout<<"Dequeued element is "<<arr[front]<<endl;
	front++;
}

void top()
{
	cout<<"First element is "<<arr[front]<<endl;
}

void bottom()
{
	cout<<"Last element is "<<arr[rear-1]<<endl;
}

void display()
{
	cout<<"Queue is: ";
	
	for(int i=front;i<rear;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}




int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	dequeue();
	enqueue(60);
	top();
	bottom();
	display();
}


