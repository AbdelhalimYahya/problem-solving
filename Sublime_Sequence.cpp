#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
    
    while (test--) {
        int x , y;
        int result = 0;
        cin >> x >> y;
        
        for (int i = 0 ; i < y ; i++) {
            if (i % 2 == 0) {
                result += x;
            } else {
                result -= x;
            }
        }
        
        cout << result << endl;
    }
    
}

// the link : https://codeforces.com/contest/2148/problem/A
