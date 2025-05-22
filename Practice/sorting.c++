#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    cout<<"Enter the number of elements : ";
    int n;
    cin>>n;
    cout<<"Enter the array elements : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sorted array : ";
    selectionsort(arr,n);
    print(arr,n);
}