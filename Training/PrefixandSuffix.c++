// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

void prefixandsuffix(int arr[],int n){
    vector<int> prefix(n,0);
    vector<int> suffix(n,0);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    
    suffix[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]+arr[i];
    }
    cout<<"Prefix Array : ";
    for(int a:prefix){
        cout<<a<<" ";
    }
    cout<<"\nSuffix Array : ";
    for(int a:suffix){
        cout<<a<<" ";
    }
}

int main() 
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int arr[n],prefix[n],suffix[n];
    cout<<"Enter the array elements : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    prefixandsuffix(arr,n);
}