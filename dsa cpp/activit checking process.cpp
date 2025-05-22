#include<bits/stdc++.h>
using namespace std;

struct activity
{
	int start;
	int end;
};

bool sort_activity(activity s1,activity s2)
{
	return (s1.end < s2.end);
}

void display(activity arr[],int n)
{
	sort(arr,arr+n,sort_activity);
	
	cout<<"Following activities are selected: "<<endl;
	
	int i=0;
	
	cout<<"("<<arr[i].start<<" , "<<arr[i].end<<")"<<endl;
	
	for(int j=1;j<n;j++)
	{
		
		if(arr[j].start>=arr[i].end)
		{
			cout<<"("<<arr[j].start<<" , "<<arr[j].end<<")"<<endl;
			i=j;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter no of activities: ";
	cin>>n;
	
	activity arr[n];
	
	for(int i=0;i<=n-1;i++)
	{
		cout<<"Enter start time and end time of activity "<<i+1<<endl;
		
		cin>>arr[i].start>>arr[i].end;
	}
	
	display(arr,n);
}
