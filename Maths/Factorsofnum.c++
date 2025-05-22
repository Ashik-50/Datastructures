#include <iostream>
#include <set>
using namespace std;
void findFactors(int n) {
    set<int> factors;
    for (int i = 1; i * i <= n; i++) { 
        if (n % i == 0) { 
            factors.insert(i); 
            factors.insert(n / i); 
        }
    }
    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factors of " << num << " are: ";
    findFactors(num);
    return 0;
}