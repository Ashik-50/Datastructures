#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	bool arr[n];
	memset(arr,true,n);
	
	for(int i=2;i<n;i++)
	{
		for(int j=i*i;j<n;j+=i)
		{
			arr[j]=false;
		}
	}
	
	cout<<"Prime numbers: "<<endl;
	
	for(int k=2;k<n;k++)
	{
		if(arr[k]==true)
		{
			cout<<k<<" ";
		}
	}
}
