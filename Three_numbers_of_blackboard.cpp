#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        vector<long long> v = {a, b, c};
        sort(v.begin(), v.end());
        long long ans = min(v[2] - v[0], v[1]);
        cout << ans << '\n';
    }
    return 0;
}

// the link : https://codeforces.com/contest/2256/problem/A
