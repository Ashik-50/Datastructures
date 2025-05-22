#include<bits/stdc++.h>
using namespace std;
#define N 4
bool issafe(int maze[N][N],int x,int y){
    return (x>=0&&x<N&&y>=0&&y<N&&maze[x][y]==1);
}
bool solvemazeutil(int maze[N][N],vector<vector<int>>& sol,int x,int y){
    if(x==N-1&&y==N-1&&maze[x][y]==1){
        sol[x][y]=1;
        return true;
    }
    if(issafe(maze,x,y)){
        sol[x][y]=1;
        if(solvemazeutil(maze,sol,x+1,y)) return true;
        if(solvemazeutil(maze,sol,x,y+1)) return true;
        sol[x][y]=0;
        return false;
    }
    return false;
}
void solvemaze(int maze[N][N]){
    vector<vector<int>> sol(N,vector<int>(N,0));
    if(solvemazeutil(maze,sol,0,0)){
        cout<<"Solution exists"<<endl;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"No solution exists"<<endl;
    }
}
int main(){
    int maze[N][N] = {
        { 1, 0, 0, 0 },
        { 1, 1, 0, 1 },
        { 0, 1, 0, 0 },
        { 1, 1, 1, 1 }
    };
    solvemaze(maze);
    return 0;
}