#include<bits/stdc++.h>
using namespace std;

int n;
int cost[100][100];

int getmin(int dist[],bool visited[]){
    int min=INT_MAX;
    int mini=0;
    for(int i=0;i<n;i++){
        if(!visited[i]&&dist[i]<min){
            min=dist[i];
            mini=i;
        }
    }
    return mini;
}

void print(int dist[],int par[]){
    cout<<"\nVertex\tDistance\tPath\n";
    for(int i=0;i<n;i++){
        cout<<i<<"\t"<<dist[i]<<"\t\t";
        vector<int> path;
        int temp=i;
        while(temp!=-1){
            path.push_back(temp);
            temp=par[temp];
        }
        reverse(path.begin(),path.end());
        for(int j=0;j<path.size();j++){
            cout<<path[j];
            if(j!=path.size()-1){
                cout<<"->";
            }
        }
        cout<<endl;
    }
}

void dijkstra(int src){
    int dist[100],par[100];
    bool visited[100]={0};
    fill(dist,dist+n,INT_MAX);
    dist[src]=0;
    par[src]=-1;

    for(int i=0;i<n;i++){
        int u=getmin(dist,visited);
        visited[u]=true;
        for(int v=0;v<n;v++){
            if(!visited[v]&&(dist[u]+cost[u][v])<dist[v]&&cost[u][v]!=9999){
                dist[v]=dist[u]+cost[u][v];
                par[v]=u;
            }
        }
    }
    print(dist,par);
}

int main(){
    cout<<"Enter the n : ";
    cin>>n;
    cout<<"Enter the cost matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>cost[i][j];
        }
    }
    cout<<"Enter the Source node : ";
    int src;
    cin>>src;
    dijkstra(src);
}