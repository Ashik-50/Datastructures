#include <iostream>

// Function to check if there is a subset with a given sum
bool isSubsetSum(int arr[], int n, int sum) {
    bool dp[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;

    for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= sum; j++) 
		{
            dp[i][j] = dp[i - 1][j];
            if (j >= arr[i - 1])
                dp[i][j] = dp[i][j] || dp[i - 1][j - arr[i - 1]];
        }
    }

    return dp[n][sum];
}

int main() {
    int n;
    std::cout << "Enter the array size: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    int sum;
    std::cout << "Enter the sum to be produced: ";
    std::cin >> sum;

    if (isSubsetSum(arr, n, sum))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}

