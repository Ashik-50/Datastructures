#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    string s=bitset<4> (n).to_string();
    cout<<"Binary String : "<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<"Reversed Binary String : "<<s<<endl;
    int a=stoi(s,0,2);
    cout<<"The answer : "<<a;
}
