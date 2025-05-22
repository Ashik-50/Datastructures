#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[20],key,i,n,count=0;
	cout<<"Enter no of elements: ";
	cin>>n;
	
	cout<<"Enter "<<n<<" elements"<<endl;
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Element to be search: ";	
	cin>>key;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			cout<<key<<" is presented in "<<i<<"th index";
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
		cout<<"Element is not found";
	}
	
	
}
