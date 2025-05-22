#include <iostream>
using namespace std;
void reverse(int arr[],int l,int r){
    int i=l,j=r;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main() {
   cout<<"Enter the size : ";
   int n,k;
   cin>>n;
   cout<<"\nEnter the Array elements : ";
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<"Enter the K value : ";
   cin>>k;
   cout<<"After rotating : ";
   reverse(arr,0,n-1);
   reverse(arr,n-k,n-1);
   reverse(arr,0,n-k-1);
   
   for(int a:arr){
       cout<<a<<" ";
   }
   
}