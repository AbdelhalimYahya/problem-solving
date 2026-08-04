#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        long long ans = 0;
        int cur_min = INT_MAX;
        for (int i = 0; i < n; ++i) {
            cur_min = min(cur_min, a[i]);
            ans += cur_min;
        }
        // and instead of ans f***
        cout << ans << '\n';
    }
    return 0;
}

// the link : https://codeforces.com/contest/2237/problem/A
