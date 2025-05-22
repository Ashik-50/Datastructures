#include<bits/stdc++.h>
using namespace std;
class graph{
private:
    int vertices;
    // vector<vector<int>> adjmat;
    vector<vector<pair<int,int>>> adjlist;
public:
    graph(int v){
        vertices=v;
        // adjmat.resize(v,vector<int>(v,0));
        adjlist.resize(v);
    }
    // void addedge(int u,int v,int wt,bool isd){
    //     adjmat[u][v]=wt;
    //     if(!isd){
    //         adjmat[v][u]=wt;
    //     }
    // }
    void addedge(int u,int v,int wt,bool isd){
        adjlist[u].push_back({v,wt});
        if(!isd){
            adjlist[v].push_back({u,wt});
        }
    }
    void display(){
        cout<<"\nAdjacency List : ";
        // cout<<"\nAdjacency Matrix : ";
        for(int i=0;i<vertices;i++){
            // for(int j=0;j<vertices;j++){
            //     cout<<adjmat[i][j];
            // }
            // cout<<endl;
            cout<<i<<" -> ";
            for(auto a:adjlist[i]){
                cout<<"( "<<a.first<<" , "<<a.second<<" )";
            }
            cout<<endl;
        }
    }
};
int main(){
    int v,e;
    cout<<"Enter the vertices and edges : ";
    bool isd,isw;
    cin>>v>>e;
    cout<<"\nEnter if its directed and weighted (0 and 1) : ";
    cin>>isd>>isw;
    graph g(v);
    for(int i=0;i<e;i++){
        int u,v,weight=1;
        cin>>u>>v;
        if(isw){
            cin>>weight;
        }
        g.addedge(u,v,weight,isd);
    }
    g.display();
}