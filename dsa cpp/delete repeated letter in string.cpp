#include<bits/stdc++.h>
using namespace std;

int main()
{
	string in;
	cout<<"Enter a word: ";
	cin>>in;
	
	int l;
	l=in.length();
	
	string newstr="";
	
	for(int i=0;i<l;i++)
	{
		bool is=false;
		for(int j=0;j<i;j++)
		{
			if(in[i]==in[j])
			{
				is=true;
				break;
			}
			
			
		}
		
		if(is==false)
			{
				newstr+=in[i];
			}
	}
	
	cout<<"Without repeated letters: "<<newstr;
}
