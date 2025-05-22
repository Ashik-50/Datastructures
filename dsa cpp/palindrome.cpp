#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cout<<"Enter a string: ";
	cin>>a;
	
	
	
	string b=a;
	reverse(b.begin(),b.end());	
	
		
	if(a==b)
	{
		cout<<"Palindrome";
	}
	
	else
	{
		cout<<"Not palindrome";
	}
}
