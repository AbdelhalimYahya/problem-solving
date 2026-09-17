#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	
	while (test--) {
	    int A = 0;
	    int B = 0;
	    string s;
	    cin >> s;
	    
	    for (int i = 0 ; i < s.size() ; i++) {
	        if (s[i] == 'A') A++;
	        if (s[i] == 'B') B++;
	    }
	    
	    if (A < B) cout << "B" << endl;
	    if (A > B) cout << "A" << endl;
	}
}

// the link : https://codeforces.com/contest/1926/problem/A
