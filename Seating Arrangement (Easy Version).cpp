#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, x, s;
        cin >> n >> x >> s;
        string u;
        cin >> u;
 
        vector<int> dp(x + 1, -1);
        dp[0] = 0;
 
        for (char ch : u) {
            vector<int> new_dp = dp;
 
            if (ch == 'I') {
                for (int i = x - 1; i >= 0; --i) {
                    if (dp[i] != -1) {
                        new_dp[i + 1] = max(new_dp[i + 1], dp[i]);
                    }
                }
            } else if (ch == 'E') {
                for (int i = 1; i <= x; ++i) {
                    if (dp[i] != -1 && dp[i] < i * (s - 1)) {
                        new_dp[i] = max(new_dp[i], dp[i] + 1);
                    }
                }
            } else {
                for (int i = 1; i <= x; ++i) {
                    if (dp[i] != -1 && dp[i] < i * (s - 1)) {
                        new_dp[i] = max(new_dp[i], dp[i] + 1);
                    }
                }
                for (int i = x - 1; i >= 0; --i) {
                    if (dp[i] != -1) {
                        new_dp[i + 1] = max(new_dp[i + 1], dp[i]);
                    }
                }
            }
            dp = move(new_dp);
        }
 
        int ans = 0;
        for (int i = 0; i <= x; ++i) {
            if (dp[i] != -1) {
                ans = max(ans, i + dp[i]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}


// the link : https://codeforces.com/contest/2232/problem/C1
