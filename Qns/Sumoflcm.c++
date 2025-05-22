#include <bits/stdc++.h>
using namespace std;
long long LCM(int a, int b) {
    return (1LL * a * b) / __gcd(a, b);
}
long long sumOfLCMs(int N) {
    long long sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += LCM(i, N);
    }
    return sum;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cout << sumOfLCMs(N) << endl;
    }
    return 0;
}