#include<bits/stdc++.h>
using namespace std;

void naive(char *n1,char *n2)   // naive algorithm
{
	int m=strlen(n1);
	int n=strlen(n2);
	

	
	int i,j;
	
	for(i=0;i<=m-n;i++)
	{
		int count=0;
			
		for(j=0;j<n;j++)
		{
			if(n1[i+j]!=n2[j])
			{
				break;
			}
			
			
			if(n1[i+j]==n2[j])
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
	char n1[]="AABAACAABAABAABA";  //this is called as text
	char n2[]="AABA";              //this is called ad pattern (pattern is known as the substring that to be searched in the text in which index it is presented)
	
	naive(n1,n2);
}
