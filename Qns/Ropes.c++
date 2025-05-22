#include <bits/stdc++.h>
using namespace std;

int minCostToConnectRopes(vector<int>& ropes) {
    priority_queue<int,vector<int>, greater<int>> minHeap(ropes.begin(),ropes.end());
    int totalCost = 0;
    while (minHeap.size() > 1) {
        int first = minHeap.top(); minHeap.pop();
        int second = minHeap.top(); minHeap.pop();
        
        int cost = first + second;
        totalCost += cost;
        
        minHeap.push(cost);
    }
    
    return totalCost;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> ropes(N);
        for (int i = 0; i < N; i++) {
            cin >> ropes[i];
        }
        cout << minCostToConnectRopes(ropes) << endl;
    }
    return 0;
}
