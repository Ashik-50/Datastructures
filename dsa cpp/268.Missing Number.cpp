#include <iostream>
using namespace std;

//268.Missing Number
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];
    
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of first n natural numbers
    int totalSum = n * (n + 1) / 2;

    // Calculate the sum of elements in the array
    int arraySum = 0;
    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }

    // The missing number is the difference between the total sum and the array sum
    int missing = totalSum - arraySum;

    cout << "The missing number is: " << missing << endl;

    
    return 0;
}

