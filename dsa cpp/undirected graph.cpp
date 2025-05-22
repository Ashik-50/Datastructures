#include<bits/stdc++.h>
#define v 4       
using namespace std;    //this code is for undirected graph

void init(int arr[][v])
{
	int i,j;
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			arr[i][j]=0;
		}
	}
}

void insertEdge(int arr[][v],int i,int j)
{
	arr[i][j]=1;
	arr[j][i]=1;  //delete this line for directed graph
}

void printAdjmatrix(int arr[][v])
{
	for(int i=0;i<v;i++)
	{
		cout<<i<<":";
		for(int j=0;j<v;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}


int main()
{
	int adj[v][v];
	init(adj);
	insertEdge(adj,0,1);
	insertEdge(adj,0,2);
	insertEdge(adj,1,2);
	insertEdge(adj,2,0);
	insertEdge(adj,2,3);
	printAdjmatrix(adj);
}
