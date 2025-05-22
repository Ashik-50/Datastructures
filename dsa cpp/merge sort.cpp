#include<bits/stdc++.h>
using namespace std;

//merge sorting

void merge(int arr[],int l,int mid,int r)
{
	int i=l;  //starting index for left subarray
	int j=mid+1; //starting index for right subarray
	int k=l; //strating index for temporary array
	
	
	int temp[r+1];
	
	while(i<=mid && j<=r)
	{
		if(arr[i]<=arr[j])
		{
			temp[k]=arr[i]; //arr[i] is smallest
			i++;
			k++;
		}
		
		else
		{
			temp[k]=arr[j]; //arr[j] is smallest
			j++;
			k++;
		}
	}
	
	while(i<=mid) //copy left array to temp array
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	
	while(j<=r) //copy right array to temp array
	{
		temp[k]=arr[j];
		j++;
		k++;
	}
	
	
	for(int s=l;s<=r;s++)
	{
		arr[s]=temp[s];
	}
}




void mergeSort(int arr[],int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		
		mergeSort(arr,l,mid);//first half of array
		mergeSort(arr,mid+1,r);//second half of array
		merge(arr,l,mid,r);
	}
	
}



int main()
{
	int n;
	cout<<"Enter no of elements: ";
	cin>>n;
	
	cout<<"Enter "<<n<<" elements: ";
	int myarr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>myarr[i];
	}
	
	cout<<"Before sorting: \n";
	
	for(int i=0;i<n;i++)
	{
		cout<<myarr[i]<<" ";
	}
	
	cout<<endl;
	
	int l=0;
	int r=n-1;
	
	cout<<"After sorting: \n";
	
	mergeSort(myarr,l,r);
	
	for(int i=0;i<n;i++)
	{
		cout<<myarr[i]<<" ";
	}
	
}
