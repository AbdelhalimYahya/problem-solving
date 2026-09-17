#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	string standard = "codeforces";
	cin >> test;
	
	while (test--) {
	    int a , b , c;
	    cin >> a >> b >> c;
	    
	    if (a+b >= 10 || a+c >= 10 || b+c >= 10) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	}
}


// the link : https://codeforces.com/contest/1850/problem/A
