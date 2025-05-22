#include <bits/stdc++.h>
using namespace std;
int evaluatePrefix(string expr) {
    stack<int> st;
    for (int i = expr.length() - 1; i >= 0; i--) {
        char ch = expr[i];
        if (isdigit(ch)) {
            st.push(ch - '0');
        } 
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            int v1 = st.top(); st.pop();
            int v2 = st.top(); st.pop();
            switch (ch) {
                case '+': st.push(v1 + v2); break;
                case '-': st.push(v1 - v2); break;
                case '*': st.push(v1 * v2); break;
                case '/': st.push(v1 / v2); break;
            }
        }
    }
    return st.top();
}
int main(){
    string expr;
    cin >> expr;
    cout << evaluatePrefix(expr) << endl;
    return 0;
}