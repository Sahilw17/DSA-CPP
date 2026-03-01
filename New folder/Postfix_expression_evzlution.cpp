#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(string exp) {
    stack<int> st;

    for(int i = 0; i < exp.length(); i++) {

        if(isdigit(exp[i])) {
            st.push(exp[i] - '0');
        }
        else {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();

            switch(exp[i]) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
            }
        }
    }

    return st.top();
}

int main() {
    string exp = "56+82-*3+-";
    cout << "Result: " << evaluatePostfix(exp);
    return 0;
}