#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	int standard;
	cin >> test;
	
	while (test--) {
	    int a , b , c;
	    cin >> a >> b >> c;
	    
	    if (a==b) standard = c;
	    if (a==c) standard = b;
	    if (c==b) standard = a;
	    
	    cout << standard << endl;
	}
}

// the link : https://codeforces.com/contest/1915/problem/A
