#include<bits/stdc++.h>
using namespace std;

int gcd(int n1,int n2)
{
	if(n2==0)
	{
		return n1;
	}
	
	else
	{
		return gcd(n2,n1%n2);
	}
}

int phi(int n)
{
	int result=0;
	
	for(int i=1;i<=n;i++)
	{
		if(gcd(i,n)==1)
		{
			result++;
		}
	}
	
	return result;
}

int main()
{
	int n,out;
	cout<<"Enter a number: ";
	cin>>n;
	out=phi(n);
	
	cout<<out;
}
