// You are using GCC
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

void display(activity arr[],int n,string name[])
{
    
    
    sort(arr,arr+n,sort_activity);
    
    int i=0,head=0;
    
    
    
    cout<<"Selected Activities are: "<<endl;
    
    for(i=0;i<n;i++)
    {
        if(arr[i].start==1)
        {
            cout<<name[i];
            head=i;
        }
    }
    
    for(int j=1;j<n;j++)
    {
        if(arr[j].start>=arr[head].end)
        {
            cout<<name[j];
            head=j;
        }
        
        else
        {
            continue;
        }
    }
    
    
}



int main()
{
    int n;
    cin>>n;
    string name[n];
    
    activity arr[n];
    
    
    
    for(int i=0;i<=n-1;i++)
    {
        cin>>name[i];
        cin>>arr[i].start;
        cin>>arr[i].end;
        
        
    }
    
    display(arr,n,name);
    
    

    
}
