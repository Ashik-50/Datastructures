// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int arr1[n],arr2[n];
    cout<<"Enter the array elements : \n";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    vector<int> sum;
    int carry=0;
    
    for(int i=n-1;i>=0;i--){
        int tot=arr1[i]+arr2[i]+carry;
        carry=tot/10;
        if(carry>0){
            tot=tot%10;
        }
        sum.push_back(tot);
    }
    
    if(carry!=0)
    {
        sum.push_back(carry);
        carry=0;
        
    }
    reverse(sum.begin(),sum.end());
    for(int a:sum){
        cout<<a<<" ";
    }
    
}