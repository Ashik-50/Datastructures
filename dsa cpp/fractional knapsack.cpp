#include <bits/stdc++.h>
using namespace std;

struct Item{
	int profit,weight;
	Item(int profit,int weight)
 {
 	this->profit=profit;
 	this->weight=weight;
 }
 };
 static bool cmp(struct Item a,struct Item b){
 	double r1=(double)a.profit/(double)a.weight;
 	double r2=(double)b.profit/(double)b.weight;
 	return r1>r2;
 }
 double fractionalKnapsack(int w,struct Item arr[],int n)
 {
 	sort(arr,arr+n,cmp);
 	double finalvalue=0.0;
 	for(int i=0;i<n;i++){
 		if(arr[i].weight<=w){
        w=w-arr[i].weight;
		finalvalue=finalvalue+arr[i].profit;			
		 }
		 else{
		 	finalvalue=finalvalue+arr[i].profit*((double)w/(double)arr[i].weight);
		   break;
	}
		 	
		 }
return finalvalue;
}
int main()
 {
 	int W=50;
	 Item arr[]={{270,90},{180,60},{160,40}};
	 int N=sizeof(arr)/sizeof(arr[0]);
	 cout<<fractionalKnapsack(W,arr,N);
	 return 0;
}
