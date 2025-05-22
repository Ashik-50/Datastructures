#include <iostream>
#include <stack>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int applyOp(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
    return 0;
}

int evaluateInfix(string expr) {
    stack<int> values;
    stack<char> ops;

    for (int i = 0; i < expr.length(); i++) {
        char ch = expr[i];

        if (isdigit(ch)) {
            int num = 0;
            while (i < expr.length() && isdigit(expr[i])) {
                num = num * 10 + (expr[i] - '0');
                i++;
            }
            i--; 
            values.push(num);
        } 
        else if (ch == '(') {
            ops.push(ch);
        } 
        else if (ch == ')') {
            while (!ops.empty() && ops.top() != '(') {
                int v2 = values.top(); values.pop();
                int v1 = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOp(v1, v2, op));
            }
            ops.pop();
        } 
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            while (!ops.empty() && precedence(ops.top()) >= precedence(ch)) {
                int v2 = values.top(); values.pop();
                int v1 = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOp(v1, v2, op));
            }
            ops.push(ch);
        }
    }

    while (!ops.empty()) {
        int v2 = values.top(); values.pop();
        int v1 = values.top(); values.pop();
        char op = ops.top(); ops.pop();
        values.push(applyOp(v1, v2, op));
    }

    return values.top();
}

int main() {
    string expr;
    getline(cin, expr);
    cout << evaluateInfix(expr) << endl;
    return 0;
}
