#include<bits/stdc++.h>
using namespace std;

int front=-1; //queue is empty
int rear=-1;  //queue is empty

class myqueue
{
	public:
		int *arr;       //array decalration for entire class
		
	myqueue(int n)
	{
		arr=new int[n];   //array declaration with size;
	}
	
	void enqueue(int value)
	{
		if(front==rear)
		{
			front=0;  // stating of queue 
			rear=0;   //ending of queue
		}
		
		arr[rear]=value;    //storing value in array
		rear++;
	}
	
	
	void dequeue()
	{
		front++;   //deleting the head and shifting the head to the index +1
	}
	
	void display()
	{
		
		for(int i=front;i<rear;i++)    //displaying the queue from front to rear
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl<<endl;
	}
	
	void top()
	{
		cout<<arr[front]<<endl<<endl;   //displaying top element
	}
	
	void bottom()
	{
		cout<<arr[rear-1]<<endl<<endl;   //displaying bottom element
	}
};






int main()
{
	int n,value;
	cout<<"No of elements in queue: ";
	cin>>n;
	myqueue q(n);
	
	cout<<"Enter "<<n<<" elements: "<<endl;
	for(int i=1;i<=n;i++)
	{
	  cin>>value;
	  q.enqueue(value);
	  	
	}
	
	cout<<"Queue is: "<<endl;
	q.display();
	
	
	q.dequeue();
	
	cout<<"Queue after deleting: "<<endl;
	q.display();
	
	cout<<"Top element: ";
	q.top();
	
	cout<<"Bottom element: ";
	q.bottom();
	
	
}
