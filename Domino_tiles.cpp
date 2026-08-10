#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 998244353;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        if (n == 2) {
            int ans = 0;
            for (char c1 = '0'; c1 <= '1'; c1++) {
                for (char c2 = '0'; c2 <= '1'; c2++) {
                    if ((s[0] == '?' || s[0] == c1) && 
                        (s[1] == '?' || s[1] == c2)) {
                        ans++;
                    }
                }
            }
            cout << ans << '\n';
            continue;
        }
 
        int ans = 0;
 
        for (int start_even = 0; start_even <= 1; start_even++) {
            for (int start_odd = 0; start_odd <= 1; start_odd++) {
                bool possible = true;
 
                for (int i = 0; i < n; i++) {
                    char expected;
                    if (i % 2 == 0) {
                        int pos = i / 2;
                        if (pos % 2 == 0) {
                            expected = start_even ? '1' : '0';
                        } else {
                            expected = start_even ? '0' : '1';
                        }
                    } else {
                        int pos = i / 2;
                        if (pos % 2 == 0) {
                            expected = start_odd ? '1' : '0';
                        } else {
                            expected = start_odd ? '0' : '1';
                        }
                    }
 
                    if (s[i] != '?' && s[i] != expected) {
                        possible = false;
                        break;
                    }
                }
 
                if (possible) {
                    ans = (ans + 1) % MOD;
                }
            }
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}


// the link : https://codeforces.com/contest/2256/problem/B
