#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
    
    while (test--) {
        int a , b , c , d;
        cin >> a >> b >> c >> d;
        
        if (a == b && b == c && c == d) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
}

// the link : https://codeforces.com/contest/2167/problem/A
