#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int m,n,r,c;
    cout << "Enter the array1 size: ";
    cin >>m>> n;
    
    int arr1[m][n];

    cout << "Enter the matrix 1 elements: \n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the array2 size: ";
    cin >>r>>c;
    
    if(n!=r){
        cout<<"Not Possible!";
    }
    int arr2[r][c],res[m][c];
    memset(res, 0, sizeof(res));
    cout << "Enter the matrix 2 elements: \n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr2[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < c; j++) {
            for(int k = 0; k < n; k++) {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout << "Matrix multiplication result: \n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < c; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
