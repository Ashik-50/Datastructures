#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i,in;
   stack <int> hello;
   cout<<"No of elements:";
   cin>>n;
   
   cout<<"Enter "<<n<<" elements"<<endl;   
   for(i=1;i<=n;i++)
   {
   	cin>>in;
       hello.push(in);
   }
   
   cout<<"Stack elements"<<endl;
   
   while(!hello.empty())
   {
       cout<<hello.top()<<endl;
       hello.pop();
   }
}
