#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	string result = "NO";
	
	cin >> s;
	
	for (int i = 0 ; i < s.size() ; i++) {
	    if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
	        result = "YES";
	        break;
	    }
	}
	
	cout << result;

}

// the link : https://codeforces.com/problemset/problem/133/A
