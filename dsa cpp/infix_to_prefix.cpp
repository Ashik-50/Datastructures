#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void infixToPrefix(string s)
{
    stack<char> st;
    string result;

    reverse(s.begin(), s.end());  // Reverse the input string

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;

        else if (c == ')')
            st.push(')');

        else if (c == '(')
        {
            while (!st.empty() && st.top() != ')')
            {
                result += st.top();
                st.pop();
            }
            st.pop();  // Pop the remaining ')'
        }
        else
        {
            while (!st.empty() && prec(s[i]) < prec(st.top()))
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());  // Reverse the result string
    cout << result << endl;
}

int main()
{
    string expr;
    cin >> expr; //try A+B-C output: -+ABC
    infixToPrefix(expr);

    return 0;
}


