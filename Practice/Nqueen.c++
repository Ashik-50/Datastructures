#include<bits/stdc++.h>
using namespace std;
void printsol(int board[][10],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool isSafe(int board[][10],int row,int col,int n){
    int i,j;
    for(i=0;i<col;i++){
        if(board[row][i]) return false;
    }
    for(i=row,j=col;i>=0&&j>=0;i--,j--){
        if(board[i][j]) return false;
    }
    for(i=row,j=col;i<n&&j>=0;i++,j--){
        if(board[i][j]) return false;
    }
    return true;
}
bool SolveNQ(int board[][10],int col,int n){
    if(col>=n) return true;
    for(int i=0;i<n;i++){
        if(isSafe(board,i,col,n)){
            board[i][col]=1;
            if(SolveNQ(board,col+1,n)){
                return true;
            }
            board[i][col]=0;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the number of queens : ";
    cin>>n;
    int board[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            board[i][j]=0;
        }
    }
    if(SolveNQ(board,0,n)){
        printsol(board,n);
    }else{
        cout<<"No solution exists";
    }
}