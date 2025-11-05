// problem A Round 1030 (Div. 2)
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>

using namespace std;

int main() {
    int test;
    cin >> test;
    int n, k;

    while (test--) {
        cin >> n >> k;
        string bitstring = "";

        for (int i = 0; i < n; i++) {
            if (k != 0) {
                bitstring += '1';
                k--;
            }
            else {
                bitstring += '0';
            }
        }

        cout << bitstring << endl;
    }
    return 0;
}

// the link : https://codeforces.com/problemset/problem/2118/A
