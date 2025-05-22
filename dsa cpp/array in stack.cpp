#include<iostream>
using namespace std;
#define max_size 20
int top=-1;

int arr[max_size];

void push(int value)
{
	if(top>=19)
	{
		cout<<"Overflow";
	}
	
	else
	{
		++top;
		arr[top]=value;
	}
}

void display()
{
	for(int i=top;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int n,value;
	cout<<"enter a number:";
	cin>>n;
	cout<<"enter data"<<endl;
	
	
	for(int i=1;i<=n;i++)
	{
		cin>>value;
		push(value);
		
		
	}
	
	display();
	
	
	
}
