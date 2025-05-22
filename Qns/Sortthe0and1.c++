#include <bits/stdc++.h>
using namespace std;
void sortArray(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++, mid++;
        } 
        else if (arr[mid] == 1) {
            mid++;
        } 
        else { 
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        sortArray(arr);
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}