
#include <bits/stdc++.h>
using namespace std;




int lcs(string X, string Y, int m, int n)
{
	int LCSuff[m + 1][n + 1];
	int i, j;

	for (i = 0; i <= m; i++) {
		for (j = 0; j <= n; j++) {
			if (i == 0 || j == 0)
				LCSuff[i][j] = 0;

			else if (X[i - 1] == Y[j - 1])
				LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;

			else
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}

	
	return L[m][n];
}





int main()
{
	string X,Y;
	cout<<"Enter string1: ";
	cin>>X;
	cout<<"Enter string2: ";
	cin>>Y;
	
	int m,n;
	
	m=X.length();
	n=Y.length();

	cout<<"LCS is "<<lcs(X, Y, m, n);

	return 0;
}

