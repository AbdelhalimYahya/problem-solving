#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	
	while (test--) {
	    string s;
	    cin >> s;
	    
	    s.pop_back();
	    s.pop_back();
	    
	    s += "i";
	    
	    cout << s << endl;
	}
}


// the link : https://codeforces.com/contest/2065/problem/A
