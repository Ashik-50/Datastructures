// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int amount;
    cin>>amount;
    
    int five,three,two,one;
    
    five=amount/5;
    amount%=5;
    
    three=amount/3;
    amount%=3;
    
    two=amount/2;
    amount%=2;
    
    one=amount;
    
    cout<<five<<endl<<three<<endl<<two<<endl<<one<<endl;
}
