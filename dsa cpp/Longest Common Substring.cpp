#include <bits/stdc++.h>
using namespace std;

int LCSubstr(string X, string Y, int m, int n) {
    int LCSuff[m+1][n+1];
    int result = 0;  // Initialize result

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
                result = max(result, LCSuff[i][j]);
            } 
			
			else 
			{
                LCSuff[i][j] = 0; // For Longest Common Substring, reset if characters do not match
            }
        }
    }

    return result;
}

int main() 
{
    string X, Y;
    cout << "Enter string1: "; // Example input: ABCDGH
    cin >> X;
    cout << "Enter string2: "; // Example input: ACDGHR
    cin >> Y;

    int m = X.length();
    int n = Y.length();

    cout << "Longest Common Substring length is " << LCSubstr(X, Y, m, n) << endl;
    return 0;
}

