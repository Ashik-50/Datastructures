#include <bits/stdc++.h>
using namespace std;

int lis(int arr[], int n) {
    int lis[n];

    // Each element is an LIS of at least length 1 (itself)
    for (int i = 0; i < n; i++)
        lis[i] = 1;

    // Compute LIS values for all elements
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;  // Corrected formula
            }
        }
    }

    return *max_element(lis, lis + n);  // Corrected return
}

int main() {
    int arr[] = {8, 32, 59, 23, 61, 70, 31}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << lis(arr, n);  // Expected Output: 4
}
