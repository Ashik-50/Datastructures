#include<bits/stdc++.h>
using namespace std;
void binarysearch(int arr[],int key,int n){
    int l=0,r=n-1;
    bool found=false;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==key){
            cout<<"The value is found at "<<mid;
            found=true;
            break;
        }else if(arr[mid]>key){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    if(!found){
        cout<<"The value is not found";
    }
}
int main(){
    int n,key;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the sorted data : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the search element : ";
    cin>>key;
    binarysearch(arr,key,n);
}