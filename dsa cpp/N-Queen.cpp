#include<bits/stdc++.h>
using namespace std;

int n;
int board[100][100];

bool safe(int row,int col)
{
    for(int i=0;i<col;i++)
    {
        if(board[row][i])
        {
            return false;
        }
    }
    
    for(int i=row,j=col;i>=0 && j>=0;i--,j--)
    {
        if(board[i][j])
        {
            return false;
        }
    }
    
    for(int i=row,j=col;i<n && j>=0;i++,j--)
    {
        if(board[i][j])
        {
            return false;
        }
    }
    
    return true;
}

bool solve(int col)
{
    if(col==n)
    {
        return true;
    }
    
    
    for(int i=0;i<n;i++)
    {
        if(safe(i,col))
        {
            board[i][col]=1;
            
            if(solve(col+1))
            {
                return true;
            }
            
            board[i][col]=0;
        }
    }
    
    return false;
}


int main()
{
    cin>>n;
    solve(0);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }
        
        cout<<endl;
    }
}
