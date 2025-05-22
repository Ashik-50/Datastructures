// You are using GCC
#include<bits/stdc++.h>
using namespace std;

struct item{
    int profit, weight;
};

static bool cmp(struct item a, struct item b){
    double r1 = (double)a.profit / (double)a.weight;
    double r2 = (double)b.profit / (double)b.weight;
    return r1 > r2;
}

double frakna(int w, struct item a[], int n){
    sort(a, a+n, cmp);
    double fin=0.0;
    for(int i=0;i<n;i++){
        if(a[i].weight<=w){
        w=w-a[i].weight;
        fin=fin+a[i].profit;
    }
    else{
        fin=fin+a[i].profit*((double)w/(double)a[i].weight);
        break;
    }
    }
    return fin;
}

int main(){
    int n,w;
    cin>>n;
    item a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].weight>>a[i].profit;
    }
    cin>>w;
    cout<<"Maximum profit is: "<<fixed<<setprecision(2)
    <<frakna(w,a,n);
    return 0;
}
