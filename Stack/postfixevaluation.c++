#include <iostream>
#include <stack>
using namespace std;

int postfixe(string str) {
    stack<int> st;
    for (char ch : str) {
        if (isdigit(ch)) {
            st.push(ch - '0');
        } 
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            int v2 = st.top(); st.pop();
            int v1 = st.top(); st.pop();
            
            switch (ch) {
                case '+': st.push(v1 + v2); break;
                case '-': st.push(v1 - v2); break;
                case '*': st.push(v1 * v2); break;
                case '/': st.push(max(v1, v2) / min(v1, v2)); break;
            }
        }
    }
    return st.top();
}
int main() {
    string str;
    cin >> str;  // Read input
    cout << postfixe(str);
    return 0;
}
