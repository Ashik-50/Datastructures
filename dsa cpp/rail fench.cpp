#include<bits/stdc++.h>
using namespace std;

void rail(string in,int key)
{
	int l;
	l=in.length();
	
	char arr[key][l];
	
	for(int i=0;i<key;i++)
	{
		for(int j=0;j<l;j++)
		{
			arr[i][j]=0;
		}
	}
	
	bool direction=false;
	
	int row=0;
	int col=0;
	
	for(int i=0;i<l;i++)
	{
		if(row==0||row==key-1)
		{
			direction=!direction;	
		}
		
		arr[row][col++]=in[i];
		
		
		direction ? row++ : row--;
		
		if(key==1 && row>key)
		{
			row=0;
		}
	}
	
	
	for(int i=0;i<key;i++)
	{
		for(int j=0;j<l;j++)
		{
			if(arr[i][j]!=0)
			{
				cout<<arr[i][j];
			}
			
			
			else
			{
				continue;
			}
		}
	}
}



int main()
{
	string in;
	cout<<"Enter a name: ";
	cin>>in;
	int key;
	cout<<"Enter key: ";
	cin>>key;
	
	rail(in,key);
}
