#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 10;  // rat maze algorithm
bool solvemazeutil(int maze[][MAX_SIZE], int x, int y, int sol[][MAX_SIZE], int n);
void printsolution(int sol[][MAX_SIZE], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool issafe(int maze[][MAX_SIZE], int x, int y, int n)
{
    return (x>=0 && x<n && y>=0 && y<n && maze[x][y]==1) ? true : false;
}
bool solvemaze(int maze[][MAX_SIZE], int n)
{
    int sol[MAX_SIZE][MAX_SIZE];   
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            sol[i][j]=0;
        }
    }
    if(solvemazeutil(maze, 0, 0, sol, n) == false)
    {
        cout<<"Solution doesn't exist";
        return false;
    }
    printsolution(sol, n);
    return true;
}
bool solvemazeutil(int maze[][MAX_SIZE], int x, int y, int sol[][MAX_SIZE], int n)
{
    if(x==n-1 && y==n-1 && maze[x][y]==1)
    {
        sol[x][y]=1;
        return true;
    }
    if(issafe(maze, x, y, n) == true)
    {
        if(sol[x][y]==1) //third here - it means we have hit a dead end and the solution matrix sol is updated with a value of 0 at the current position (x, y)
        {
        	sol[x][y]=0;
            return false;
        }
        if(solvemazeutil(maze, x+1, y, sol, n) == true) //x,y comes first here
        {
        	sol[x][y]=1;
            return true;
        }
        if(solvemazeutil(maze, x, y+1, sol, n) == true)//second here 
        {
        	sol[x][y]=1;
            return true;
        }        
    }
    return false;
}
int main()
{
    int n;    
    cout<<"Enter the size of maze: ";
    cin>>n;
    int maze[MAX_SIZE][MAX_SIZE];
    cout<<"Enter the path: \n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>maze[i][j];
        }
    }
    cout<<"Possible maze path is: "<<endl;
    solvemaze(maze, n);
    return 0;
}



//EXPLANATION

/*Let's go through the code line by line:

#include<bits/stdc++.h> - This is a preprocessor directive to include the entire standard library header file.

using namespace std; - This statement specifies that the program is using the standard namespace.

const int MAX_SIZE = 10; - This is a constant integer value that specifies the maximum size of the maze.

bool solvemazeutil(int maze[][MAX_SIZE], int x, int y, int sol[][MAX_SIZE], int n); - This is a function prototype for the recursive function solvemazeutil() that takes the maze, current position (x, y), the solution matrix, and the size of the maze as input parameters.

void printsolution(int sol[][MAX_SIZE], int n) - This function takes the solution matrix and the size of the maze as input parameters and prints the solution.

bool issafe(int maze[][MAX_SIZE], int x, int y, int n) - This function takes the maze, current position (x, y), and the size of the maze as input parameters and returns a boolean value indicating whether the given position is safe or not.

bool solvemaze(int maze[][MAX_SIZE], int n) - This is the main function that takes the maze and the size of the maze as input parameters and returns a boolean value indicating whether a solution exists or not.

int sol[MAX_SIZE][MAX_SIZE]; - This is a 2D matrix that stores the solution path.

The nested for loops from line 19 to 23 initialize the sol matrix with all 0s.

if(solvemazeutil(maze, 0, 0, sol, n) == false) - This checks if a solution exists or not. It calls the recursive function solvemazeutil() with the initial position (0, 0) and the sol matrix.

cout<<"Solution doesn't exist"; - If there is no solution, this message is printed.

printsolution(sol, n); - If a solution exists, this function is called to print the solution.

return true; - Returns true if a solution exists.

bool solvemazeutil(int maze[][MAX_SIZE], int x, int y, int sol[][MAX_SIZE], int n) - This is the recursive function that takes the maze, current position (x, y), the solution matrix, and the size of the maze as input parameters and returns a boolean value indicating whether a solution exists or not.

if(x==n-1 && y==n-1 && maze[x][y]==1) - This checks if the current position is the bottom-right corner of the maze and it is a valid cell (i.e., the value is 1).

sol[x][y]=1; - If the current position is the solution, set the value of the sol matrix at the current position to 1.

return true; - Returns true if the solution is found.*/
