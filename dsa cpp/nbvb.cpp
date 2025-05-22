#include<bits/stdc++.h>
using namespace std;


int lis(int arr[],int n)
{
	int lis[n];
	lis[0]=1;
	
	for(int i=1;i<n-1;i++)
	{
		lis[i]=1;
		for(int j=0;j<n;j++)
		{
			if(arr[i]>arr[j] && lis[i]<lis[j]+1)
			{
				lis[i]=lis[j]+1;
			}
		}
	}
	
	return *max_element(lis,lis+n);
}

int main()
{
	int n;
	cout<<"enter no of elements: ";
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"LIS is "<<lis(arr,n);
}
