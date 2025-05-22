#include<bits/stdc++.h>
using namespace std;

int main()
{
	string in;
	cin>>in;
	
	int l;
	l=in.length();
	
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(in[i]==in[j])
			{
				continue;
			}
			
			else
			{
				in[i]=in[i];
			}
		}
	}
	
	for(int i=0;i<l;i++)
	{
		cout<<in[i];
	}
}
