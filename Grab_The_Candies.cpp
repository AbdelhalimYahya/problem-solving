#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int test;
	cin >> test;
	
	while (test--) {
	    unordered_map<string , int> mp;
	    mp["evenmehai"] = {0};
	    mp["oddbianca"] = {0};
	    
	    int a;
	    cin >> a;
	    
	    for (int i = 0 ; i < a ; i++) {
	        int x;
	        cin >> x;
	        if (x % 2 == 0) {
	            mp["evenmehai"] += x;
	        } else mp["oddbianca"] += x;
	    }
	    
	    if (mp["evenmehai"] > mp["oddbianca"]) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
    }
}

// the link : https://codeforces.com/contest/1807/problem/B
