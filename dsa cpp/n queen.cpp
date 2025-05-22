// You are using GCC
#include<bits/stdc++.h>

using namespace std;

void printsolution(int board[][10],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(board[i][j])
            {
                cout<<1<<" ";
            }
            
            else
            {
                cout<<0<<" ";
            }
        }
        
        cout<<endl;
    }
}


bool issafe(int board[][10],int row,int col,int n)
{
    int i,j;
    
    for(i=0;i<col;i++)//check the row
    {
        if(board[row][i])
        {
            return false;
        }
    }
    
    for(i=row , j=col ; j>=0 && i>=0 ; i-- , j--)//check upper left diagonal
    {
        if(board[i][j])
        {
            return false;
        }
    }
    
    
    for(i=row,j=col;j>=0 && i<n;i++,j--)//check lower left diagonal
    {
        if(board[i][j])
        {
            return false;
        }
    }
    
    return true;
    
}


bool solveNQutil(int board[][10],int col,int n)
{
    if(col>=n)
    {
        return true;
    }
    
    for(int i=0;i<n;i++)
    {
        if(issafe(board,i,col,n)==true)
        {
            board[i][col]=1;
            
            if(solveNQutil(board,col+1,n))
            {            	
                return true;
            }
            
            else
            {
            	board[i][col]=0;
			}
        }
    }
    return false;
}

bool solveNQ(int board[][10],int n)
{
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            board[i][j]=0;
        }
    }
    
    
    if(solveNQutil(board,0,n)==false)
    {
        cout<<"Solution does not exist";
        return false;
    }
    
    printsolution(board,n);
    return true;
}




int main()
{
    int n;
    cin>>n;
    int board[10][10];
    
    solveNQ(board,n);
}

