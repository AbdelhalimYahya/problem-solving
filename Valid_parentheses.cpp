#include <stack>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        unordered_map<char, char> match = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        // iteration using iterator
        for (auto it = s.begin(); it != s.end(); ++it) {
            char ch = *it;

            // opening bracket
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            // closing bracket
            else {
                if (st.empty()) return false;

                if (st.top() != match[ch]) {
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};

// The link : https://leetcode.com/problems/valid-parentheses/submissions/1858431035/
