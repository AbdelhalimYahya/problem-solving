#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
 
        int mn = min({a, b, c});
        int mx = max({a, b, c});
        cout << a + b + c - mn - mx << '\n';
    }
 
    return 0;
}

// the link : https://codeforces.com/contest/1760/problem/A
