#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;
        
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if ((a[i] == 'R') != (b[i] == 'R')) {
                ok = false;
                break;
            }
        }
        
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

// the link : https://codeforces.com/contest/1722/problem/B
