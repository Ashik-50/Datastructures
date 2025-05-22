#include <bits/stdc++.h>
using namespace std;

int LCS(string X, string Y, int m, int n) 
{
    int LCSuff[m+1][n+1];

    for(int i = 0; i <= m; i++) 
	{
        for(int j = 0; j <= n; j++) 
		{
            if(i == 0 || j == 0) 
			{
                LCSuff[i][j] = 0;
            } 
			
			else if(X[i-1] == Y[j-1]) 
			{
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
            } 
			
			else 
			{
                LCSuff[i][j] = max(LCSuff[i-1][j], LCSuff[i][j-1]);
            }
        }
    }

    return LCSuff[m][n];
}

int main() 
{
    string X, Y;
    cout << "Enter string: "; // Example input: BBABCBCAB
    cin >> X;
    
    Y=X;
    reverse(Y.begin(),Y.end());

    int m = X.length();
    int n = Y.length();

    cout << "Longest Palindrome Subsequence length is " << LCS(X, Y, m, n) << endl;
    return 0;
}

