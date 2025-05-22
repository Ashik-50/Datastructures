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

int solve(int col)
{
    if(col==n)
    {
        return 1;
    }
    
    int tot=0;
    
    for(int i=0;i<n;i++)
    {
        if(safe(i,col))
        {
            board[i][col]=1;  
			tot+=solve(col+1);
			board[i][col]=0;       
            
        }        
        
    }
    
    
    return tot;
    
    
}


int main()
{
    cin>>n;
    int ans=solve(0);
    
    cout<<"No of arrangements "<<ans;
    
    
}
