#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> multiplyMatrix(const vector<vector<int>>& M, int N) {
    vector<vector<int>> result(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                result[i][j] += M[i][k] * M[k][j];
            }
        }
    }
    return result;
}
bool isIdempotent(const vector<vector<int>>& M, int N) {
    vector<vector<int>> squaredMatrix = multiplyMatrix(M, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (squaredMatrix[i][j] != M[i][j])
                return false;
        }
    }
    return true;
}
int main() {
    int N;
    cin >> N;
    vector<vector<int>> M(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> M[i][j];
        }
    }
    cout << (isIdempotent(M, N) ? "true" : "false") << endl;
    return 0;
}