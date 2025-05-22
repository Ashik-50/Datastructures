#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,arr[100],i,j;
	cout<<"Enter no of elements: ";
	cin>>n;
	
	cout<<"Enter "<<n<<" elements: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Before swapping: "<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"After swapping: "<<endl;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int swap;
				swap=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=swap;
			}
		}
		
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		
		cout<<endl;
	}
	
	/*for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}*/
	
	
}
