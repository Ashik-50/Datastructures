#include <iostream>
using namespace std;
void findPrimeFactors(int n) {
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 2) {
        cout << n;
    }
    cout << endl;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Prime factors of " << num << " are: ";
    findPrimeFactors(num);
    return 0;
}
