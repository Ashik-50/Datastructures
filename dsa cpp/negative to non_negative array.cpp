#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter no of elements: ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter "<<n<<" elements: "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		arr[i]=abs(arr[i]);
	}
	
	cout<<"Non-negative array: "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
