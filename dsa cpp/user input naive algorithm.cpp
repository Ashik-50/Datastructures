#include<bits/stdc++.h>
using namespace std;

void naive(string s1,string s2)   // naive algorithm
{
	int m=s1.length();
	int n=s2.length();
	

	
	int i,j;
	
	for(i=0;i<=m-n;i++)
	{
		int count=0;
			
		for(j=0;j<n;j++)
		{
			if(s1[i+j]!=s2[j])
			{
				break;
			}
			
			
			if(s1[i+j]==s2[j])
			{
				count++;
			}
			
		}
		
		if(count==n)
		{
			cout<<"Pattern found at index "<<i<<endl;
		}
		
		
	}
}


int main()
{
	string s1,s2;
	cout<<"Enter text: ";
	cin>>s1;
	cout<<"Enter pattern: ";
	cin>>s2;
	
	naive(s1,s2);
}
