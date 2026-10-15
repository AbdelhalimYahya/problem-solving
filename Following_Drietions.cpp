#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int test;
	cin >> test;
	
	while (test--) {
	    pair<int , int> position = {0,0};
	    bool ok = false;
	    int a;
	    cin >> a;
	    string moves;
	    cin >> moves;
	    
	    for (char c : moves) {
	        if (c == 'U') position.first++;
	        if (c == 'D') position.first--;
	        if (c == 'R') position.second++;
	        if (c == 'L') position.second--;
	        
	        if (position.first == 1 && position.second == 1) {
	            ok = true;
	            break;
	        }
	    }
	    
	    cout << (ok ? "YES" : "NO") << endl;
    }
}

// the link : https://codeforces.com/contest/1791/problem/B
