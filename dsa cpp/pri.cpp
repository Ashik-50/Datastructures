#include<bits/stdc++.h>
using namespace std;

struct node 
{
	int data;
	int priority;
};

node pr[100];
int size=-1;

void enqueue(int data,int priority)
{
	size++;
	pr[size].data=data;
	pr[size].priority=priority;
}

int high()
{
	int highest=INT_MIN;
	int ind=-1;
	
	for(int i=0;i<size;i++)
	{
		if(highest==pr[i].priority && ind>-1 && pr[ind].data<pr[i].data)
		{
			highest=pr[i].priority;
			ind=i;
		}
		
		else if(highest<pr[i].priority)
		{
			highest=pr[i].priority;
			ind=i;
		}
	}
	
	return ind;
}

void dequeue()
{
	int ind=high();
	
	for(int i=ind;i<size;i++)
	{
		pr[i]=pr[i+1];
	}
	
	size--;
}

int main()
{
	enqueue(5,6);
	enqueue(4,9);
	enqueue(0,2);
	enqueue(1,0);
	enqueue(6,1);
	
	
	int ind=high();
	
	for(int i=ind;i<size;i++)
	{
		int ind=high();
		
		
		cout<<pr[ind].data<<" ";
		dequeue();
	}
}
