#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n)
{
	int i,value,hole;
	
	for(i=1;i<=n-1;i++)
	{
		value=arr[i];
		hole=i;
		
		while(hole>0 && arr[hole-1]>value)
		{
			arr[hole]=arr[hole-1];
			hole=hole-1;
		}
		
		arr[hole]=value;
	}
	
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}


int main()
{
	int n,i;
	cout<<"Enter no of elements: ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter "<<n<<" elements"<<endl;
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];    //try {2,7,4,1,5,3}
	}
	
	cout<<"Before sorting: "<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	cout<<"After sorting: "<<endl;
	
	insertionsort(arr,n);
}
