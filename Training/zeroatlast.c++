// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;


int main() 
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int i=0;
    int j=0;
    
    while(j!=n)
    {
        if(arr[j]>0)
        {
            arr[i]=arr[j];
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    for(int x=i;x<n;x++)
    {
        arr[x]=0;
    }
    for(int i:arr)
    {
        cout<<i<<" ";
    }
}