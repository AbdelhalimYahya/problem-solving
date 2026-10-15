#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int test;
	cin >> test;
	
	while (test--) {
	    int a;
	    cin >> a;
	    bool ok = true;
	    unordered_map<int , int> mp;
	    
	    for (int i = 0 ; i < a ; i++) {
	        int x;
	        cin >> x;
	        
	        mp[x]++;
	        if (mp[x] > 1) ok = false;
	    }
	    
	    cout << (ok ? "YES" : "NO") << endl;
	}

}

// the link : https://codeforces.com/contest/1742/problem/B
