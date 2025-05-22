#include<bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if(c=='^')
    {
    	return 3;
	}
	
	else if(c=='/'||c=='*')
	{
		return 2;
	}
	
	else if(c=='+'||c=='-')
	{
		return 1;
	}
	
	else
	{
		return -1;
	}
}


void postfix(string in)
{
	stack<char>st;
	
	string result;
	
	reverse(in.begin(),in.end());
	
     for(int i=0;i<in.length();i++)
     {
     	char c=in[i];
     	
     	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))
		{
		 	result+=c;
	    }
				  
	    else if(c=='(')
		{
		 	st.push('(');
		}
			 
		else if(c==')')
		{
			while(st.top()!='(')
			{
				result+=st.top();
				st.pop();
			}
			
			st.pop();
		}
		
		else
		{
			
			while(!st.empty()&&(prec(c)<=prec(st.top())))
			{
				result+=st.top();
				st.pop();
			}
			
			st.push(c);
		}	
     	
	 }
	 
	 while(!st.empty())
	 {
	 	result+=st.top();
	 	st.pop();
	 }
	 
	 
	 reverse(result.begin(),result.end());
	 cout<<"Postfix : "<<result;
}

int main()
{
	string in;
	
	cin>>in;
	
	postfix(in);
}
