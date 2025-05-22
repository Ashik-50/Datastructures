#include<bits/stdc++.h>
using namespace std;

int main() {
    string a = "0010";
    cout << stoi(a, 0, 2) << endl;

    int n = 10;
    cout << bitset<4>(n).to_string() << endl;  // Specify the size as 4 or the desired number of bits
    return 0;
}

