#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        string expresion;
        cin >> expresion;

        int first  = expresion[0] - '0';
        int second = expresion[2] - '0';
        char oper  = expresion[1];

        if (oper == '>') {
            if (first > second) cout << expresion << endl;
            else {
                if (first < second) cout << first << "<" << second << endl;
                else                cout << first << "=" << second << endl;
            }
        }
        else if (oper == '<') {
            if (first < second) cout << expresion << endl;
            else {
                if (first > second) cout << first << ">" << second << endl;
                else                cout << first << "=" << second << endl;
            }
        }
        else if (oper == '=') {
            if (first == second) cout << expresion << endl;
            else {
                if (first < second) cout << first << "<" << second << endl;
                else                cout << first << ">" << second << endl;
            }
        }
    }
}

// the link : https://codeforces.com/problemset/problem/2038/N
