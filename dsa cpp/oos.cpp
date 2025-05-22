#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Before Sorting: \n";
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	cout<<"After Sorting \n";
	
	int j;
	
	for(int i=0;i<n-1;i++)
	{
		int min;
		min=i;
		
		for(int j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		
		if(min!=i)
		{
			swap(arr[min],arr[i]);
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}
