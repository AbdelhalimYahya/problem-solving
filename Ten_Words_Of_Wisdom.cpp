#include <bits/stdc++.h>
using namespace std;

void reset(int& a) {
    a = 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int test;
	cin >> test;
	
	while (test--) {
	    int a;
	    cin >> a;
	    pair<int , int> mx;
	    
	    for (int i = 0 ; i < a ; i++) {
	        int x , y;
	        cin >> x >> y;
	        
	        if (x <= 10 && y >= mx.second) {
	            mx.first = i + 1;
	            mx.second = y;
	        }
	    }
	    
	    cout << mx.first << endl;
    }
}

// the link : https://codeforces.com/contest/1850/problem/B
