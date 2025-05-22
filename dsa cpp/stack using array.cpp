#include<bits/stdc++.h>
#define max_size 20
usimg namespace std;

int arr[max_size];
int top=-1;

void push(int input)
{
	top=top+1;
	arr[top]=input;
}

int main()
{
	int input;
	push(10);
	push(20);
	push(30);
	
}

