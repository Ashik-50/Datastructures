#include<bits/stdc++.h>
using namespace std;

int main()
{
	int in;
	cout<<"Enter a number: ";
	cin>>in;
	
	int l,d;
	
	while(in!=0)
	{
		l=in%10;
		d=d*10+l;
		in=in/10;
	}
	
	cout<<"Inverted number is: "<<d;
}
