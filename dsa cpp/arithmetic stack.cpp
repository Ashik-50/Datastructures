#include<bits/stdc++.h>
using namespace std;

void display(string in)
{
	int n=in.length();
	
	stack<int>st;	
	
	stringstream ss;
	
	ss << in;
	string token;
	
	while(ss >> token)
	{
		if(isdigit(token[0]))
		{
			st.push(stoi(token));
		}
		
		else
		{
			int b=st.top();
			st.pop();
			int a=st.top();
			st.pop();
			
			int result;
			
			switch(token[0])
			{
				case '+':
					result=a+b;
					break;
					
				case '-':
					result=a-b;
					break;
					
				case '*':
					result=a*b;
					break;
					
				case '/':
					result=a/b;
					break;
					
				default:
					result=0;
			}
			
			st.push(result);
		}
	}
	
	cout<<st.top();
}


int main()
{
	string in;
	getline(cin,in);
	
	display(in);
}
