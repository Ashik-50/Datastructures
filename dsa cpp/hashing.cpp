// You are using GCC
#include <iostream>
using namespace std;

void linear_probing_hashing(int arr[], int n) {
    int hash_table[n];
    for(int i=0; i<n; i++) {
        hash_table[i] = -1; // initialize all elements to -1
    }
    for(int i=0; i<n; i++) {
        int index = arr[i] % n; // calculate index using hash function
        if(hash_table[index] == -1) { // if index is empty
            hash_table[index] = arr[i]; // insert element
        }
        else { // if index is already occupied, perform linear probing
            int j = (index+1) % n; // move to next index
            while(hash_table[j] != -1) { // until empty index is found
                j = (j+1); // move to next index
            }
            hash_table[j] = arr[i]; // insert element
        }
    }
    for(int i=0; i<n; i++) {
        cout << hash_table[i] << " "; // print hash table
    }
}

int main() {
    int n;
    cin >> n; // input table size
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i]; // input array elements
    }
    linear_probing_hashing(arr, n); // call hash function
    return 0;
}

