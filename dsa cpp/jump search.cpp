#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,arr[100],i,key,count=0;
	cout<<"Enter no of elements: ";
	cin>>n;
	
	cout<<"Enter "<<n<<" elements"<<endl;	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	
	cout<<"Enter element to be searched: ";
	cin>>key;
	
	int start=0;
	int end=sqrt(n);
	
	while(arr[end]<=key && end<n)
	{
		start=end;
		end=end+sqrt(n);
		
		if(end>n-1)
		{
			end=n;
		}
	}
	
	
	for(i=start;i<end;i++)
	{
		if(arr[i]==key)
		{
			cout<<key<<" is found in "<<i<<"th index";
			count++;
			break;			
		}
		
		else
		{
			continue;
		}
	}
	
	
	if(count==0)
	{
		cout<<"Element not found";
	}
	
	
	
	
	
}
