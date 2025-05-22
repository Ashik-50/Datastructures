#include<bits/stdc++.h>
using namespace std;

int gcd(int n1,int n2)
{
	int swap;
	
	if(n1<n2)
	{
		swap=n1;
		n1=n2; 
		n2=swap;
	}
	
	
	if(n2==0)
	{
		return n1;
	}
	
	else
	{
		return gcd(n2,n1%n2);
	}
}

int main()
{
	int a,res,b;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	res=gcd(a,b);
	cout<<res;
}
