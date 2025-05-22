#include <iostream>

// Function to partition the array into two subarrays
int partition(int arr[], int low, int high)
 {
    int pivot = arr[high]; // Choose the pivot as the last element
    
	int i = low - 1; // Index of smaller element

    for (int j = low; j <= high - 1; j++) 
	{
        if (arr[j] < pivot)
	    {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Function to perform Quick Sort
void quickSort(int arr[], int low, int high) 
{
    if (low < high) 
	{
        // Partition index, arr[pi] is now at the right place
        int pi = partition(arr, low, high);

        // Recursive calls on the two subarrays
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    quickSort(arr, 0, n - 1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}

