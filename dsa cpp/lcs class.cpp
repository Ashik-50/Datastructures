#include<bits/stdc++.h>
using namespace std;

/*
int min(int x, int y, int z) 
{ 
   return min(min(x, y), z); 
}
*/


int LCSubstr(string X,string Y,int m,int n)   //refer notes for concept (see the table)
{
	int LCSuff[m+1][n+1];
	int result;
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			{
				LCSuff[i][j]=0;
			}
			
			else if(X[i-1]==Y[j-1])
			{
				LCSuff[i][j]=LCSuff[i-1][j-1]+1;
				result=max(result,LCSuff[i][j]);
				
			}
			
			else
			{
				LCSuff[i][j] = 0;//this is for Longest Common Substring
				//LCSuff[i][j] = max(LCSuff[i][j-1],LCSuff[i-1][j]) for Longest Common Subsequence 
				//dp[i][j] = 1 + min(dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]) for Levenshtein distance
			}
		}
		
		
	}
	
	return result;
}




int main()
{
	string X,Y;
	cout<<"Enter string1: "; //X=ABCDGH
	cin>>X;
	cout<<"Enter string2: "; //Y=ACDGHR    //THE COMMOM COMMON SUB-SEQUENCE IS CDGH SO THE ANS WILL BE 4
	cin>>Y;
	
	int m,n;
	
	m=X.length();
	n=Y.length();
	
	cout<<"LCS is "<<LCSubstr(X,Y,m,n);
	return 0;
}
