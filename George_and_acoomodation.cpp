#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int count = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
	    int x , y;
	    cin >> x >> y;
	    
	    if (abs(x - y) >= 2) {
	        count++;
	    }
	}
	
	cout << count;
	return 0;

}

// the link : https://codeforces.com/problemset/problem/467/A
