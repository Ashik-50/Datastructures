#include<bits/stdc++.h>
using namespace std;


int main()
{
	int arr[100],key,i,n,k=-1,l,r,mid;
	cout<<"Enter no of elements: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Element to be searched: ";
	cin>>key;
	l=0;
	r=n-1;
	
	while(l<=r)
	{
		mid=(l+r)/2;
		
		if(arr[mid]==key)
		{
		  cout<<key<<" is found in "<<mid<<"th index";
		  k++;
		  break;	
		}
		
		else if(arr[mid]<key)
		{
			l=mid+1;
		}
		
		else if(arr[mid]>key)
		{
			r=mid-1;
		}
	}
	
	
	if(k==-1)
	{
		cout<<"Element not found";
	}
}
