#include<iostream>   //run this progrm in code block (not working in c++)
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

void pop()
{
    cout<<"Popped element is: "<<arr[top]<<endl;
    top--;
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
	push(10);
	push(20);
	push(30);
	push(40);
	pop();
	push(50);
	display();
	
	
}
