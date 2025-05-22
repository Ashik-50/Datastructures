#include<bits/stdc++.h>
using namespace std;

bool find(string in)
{
	int n=in.length();
	
	stack<char>st;
	
	for(int i=0;i<n;i++)
	{
		if(in[i]=='('||in[i]=='['||in[i]=='{')
		{
			st.push(in[i]);
		}
		
		else if (in[i]==')'||in[i]==']'||in[i]=='}')
		{
			char c=st.top();
			st.pop();
			
			if((in[i]==')'&&c!='(')||(in[i]==']'&&c!='[')||(in[i]=='}'&&c!='{'))
			{
				return false;
			}
		}
		
		
		
	}
	
	return true;
}


int main()
{
	string in;
	cin>>in; //use {[(
	if(find(in))
	{
		cout<<"balanced";
	}
	
	else
	{
		cout<<"unbalanced";
	}
}
