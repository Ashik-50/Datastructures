#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	int l,d;
	
	while(n!=0)
	{
		l=n%10;
		d=d*10+l;
		n=n/10;
	}
	
	cout<<d;
}
