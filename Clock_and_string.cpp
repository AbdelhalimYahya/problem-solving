#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if (a > b) swap(a, b);
        if (c > d) swap(c, d);
        
        if ((a < c && c < b) != (a < d && d < b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}

// the link : https://codeforces.com/problemset/problem/1971/C
