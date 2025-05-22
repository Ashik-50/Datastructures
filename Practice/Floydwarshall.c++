#include<bits/stdc++.h>
using namespace std;
#define V 4
#define INF 99999

void floydwarshall(int graph[][V]){
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(graph[i][j]>(graph[i][k]+graph[k][j])&&(graph[i][k]!=INF&&graph[k][j]!=INF)){
                    graph[i][j]=graph[i][k]+graph[k][j];
                }
            }
        }
    }
}

void print(int graph[][V]){
    cout<<"Shortest Distances : \n";
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(graph[i][j]==INF){
                cout<<"INF ";
            }else{
                cout<<graph[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int graph[V][V];
    cout<<"Enter the adjacency matrix : "<<endl;
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            cin>>graph[i][j];
        }
    }
    floydwarshall(graph);
    print(graph);
}