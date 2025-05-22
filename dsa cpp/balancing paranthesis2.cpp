#include<bits/stdc++.h>
using namespace std;

int main()
{
	string in;
	cin>>in;
	
	int l=in.length();
	
	int count=0,open=0,close=0;
	
	if(in[0]=='}')
	{
		count+=2;
	}
	
	for(int i=0;i<l;i++)
	{
		if(in[i]=='{')
		{
			open++;
		}
		
		else
		{
			close++;
		}
	}
	
	if((open-close)>-1)
	{
		count+=(open-close)/2;
	}
	
	else if((close-open)/2)
	{
		count+=(close-open)/2;
	}
	
	if(l%2==0)
	{
		cout<<count;
	}
	
	else
	{
		cout<<"-1";
	}
}
