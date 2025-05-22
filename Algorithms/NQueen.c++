#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>>& board,int row,int col,int n){
    for(int i=0;i<row;i++){
        if(board[i][col]) return false;
    }
    for(int i=row,j=col;i>=0&&j>=0;i--,j--){
        if(board[i][j]) return false;
    }
    for(int i=row,j=col;i>=0&&j<n;i--,j++){
        if(board[i][j]) return false;
    }
    return true;
}
void print(vector<vector<int>>& board,int n){
    cout<<"Solution exists! "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool solveutil(vector<vector<int>>& board,int row,int n){
    if(row==n){
        print(board, n);
        return true;
    }
    for(int col=0;col<n;col++){
        if(isSafe(board,row,col,n)){
            board[row][col]=1;
            if(solveutil(board,row+1,n))
                return true;
            board[row][col]=0;
        }
    }
    return false;
}
void solveNqueen(int n){
    vector<vector<int>> board(n,vector<int>(n,0));
    if(!solveutil(board,0,n)){
        cout<<"No solution exists for N = "<<n;
    }
}
int main(){
    int n;
    cout<<"Enter the number of queens: ";
    cin>>n;
    solveNqueen(n);
    return 0;
}