#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    
    while (t--) {
        
        int n;
        cin >> n;
        long long w;
        long long max_even = -1, min_odd = 1e18;
        
        
        for (int i = 1; i <= n; ++i) {
            cin >> w;
            
            if (i % 2 == 1) {
                min_odd = min(min_odd, w);
            } else {
                max_even = max(max_even, w);
            }
        }
        
        
        
        if (n % 2 == 1) {
            cout << "NO\n";
        } else {
 
            if (max_even + 2 <= min_odd) {
                cout << "YES\n";
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

// the link : https://codeforces.com/contest/2250/problem/A
