#include<bits/stdc++.h>
using namespace std;

int lcsfun(string a,string b,int m,int n)
{
	int lcs[m+1][n+1];
	int result=0;
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			{
				lcs[i][j]=0;
			}
			
			else if(a[i-1]==b[j-1])
			{
				lcs[i][j]=lcs[i-1][j-1]+1;
				result=max(result,lcs[i][j]);
			}
			
			else
			{
				lcs[i][j]=0;
			}
		}
	}
	
	return result;
}

int main()
{
	string a,b;
	cin>>a;
	cin>>b;
	
	int m=a.length();
	int n=b.length();
	
	int result =lcsfun(a,b,m,n);
	
	cout<<"LCS is "<<result;
}
