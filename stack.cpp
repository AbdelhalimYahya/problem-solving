#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    string token;
    
    while (cin >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int second = st.top();
            st.pop();
            int first = st.top();
            st.pop();
            int result;
            
            if (token == "+") result = first + second;
            else if (token == "-") result = first - second;
            else if (token == "*") result = first * second;
            else if (token == "/") result = first / second;
            
            st.push(result);
        } else {
            st.push(stoi(token));
        }
    }
    
    if (!st.empty()) {
        cout << st.top() << endl;
    }
    
    return 0;
}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_A
