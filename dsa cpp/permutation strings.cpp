#include<bits/stdc++.h>
using namespace std;

void permute(string a,int le,int r)
{
	if(le==r)
	{
		cout<<a<<endl;
	}
	
	else
	{
		for(int i=le;i<=r;i++)
		{
			swap(a[le],a[i]);
			permute(a,le+1,r);
			swap(a[le],a[i]);
		}
	}
}


int main()
{
	string str="ABC";
	
	int n=str.length();
	
	int r=n-1;
	
	permute(str,0,r);
}
