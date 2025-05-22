#include<bits/stdc++.h>
using namespace std;
int n,m;
int grid[100][100];
void minCostPath() {
    for (int i = 1; i < m; i++)
        grid[0][i] += grid[0][i - 1];
    for (int j = 1; j < n; j++)
        grid[j][0] += grid[j - 1][0];
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
        }
    }
    cout << "The Minimum Cost is : " << grid[n-1][m-1] << endl;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    minCostPath();
}