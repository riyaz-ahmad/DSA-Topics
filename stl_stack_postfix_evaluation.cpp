
// Program to evaluate the postfix expression
#include <bits/stdc++.h>
using namespace std;

// Function to evaluate postfix expressions
int evaluatePostfix(string str)
{
    // Creating an empty stack
    stack<int> st;
    int n = str.length();

    // Traversing the string
    for (int i = 0; i < n; i++) {
        // Pushing elements into stack if element is a number
        if (isdigit(str[i]))
            st.push(str[i] - '0');

        // Evaluation of the expression
        else {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            char op = str[i];

            // Checking for the operators
            switch (op) {
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            }
        }
    }
    return st.top();
}


int main()
{
    string str = "231*+9-";
    cout << evaluatePostfix(str) << endl;

    return 0;
}
