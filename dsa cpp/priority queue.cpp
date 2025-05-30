#include<bits/stdc++.h>
using namespace std;

struct item{
	int value;
	int priority;
};

item pr[100000];
int size=-1;

//Insert the element
int enqueue(int value,int priority)
{
	size++;
	pr[size].value=value;
	pr[size].priority=priority;
}


//Find element with high priority
int peek()
{
	int highestpriority=INT_MIN;
	int ind=-1;
	
	for(int i=0;i<=size;i++)
	{
		if((highestpriority==pr[i].priority)&&(ind>-1)&&(pr[ind].value<pr[i].value))
		{
			highestpriority=pr[i].priority;
			ind=i;
		}
		
		else if(highestpriority<pr[i].priority)
		{
			highestpriority=pr[i].priority;
			ind=i;
		}
	}
	
	return ind;
}


//Delete the high priority element
void dequeue()
{
	int ind=peek();
	
	for(int i=ind;i<size;i++)
	{
		pr[i]=pr[i+1];
	}
	
	size--;
}

int main()
{
	enqueue(10,2);
	enqueue(14,4);
	enqueue(16,4);
	enqueue(12,3);
	
	int ind=peek();
	cout<<pr[ind].value<<endl;
	dequeue();
	
	ind=peek();
	cout<<pr[ind].value<<endl;
	dequeue();
	
	ind=peek();
	cout<<pr[ind].value<<endl;
	dequeue();
	
	ind=peek();
	cout<<pr[ind].value<<endl;
	dequeue();
	
	
	
}
