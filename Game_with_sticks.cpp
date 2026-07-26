#include <bits/stdc++.h>
using namespace std;

int main() {
	int r,c;
	cin >> r >> c;
	
	string winner;
	
	for (int i = 0 ; ; i++) {
	    r--;
	    c--;
	    
	    if (winner == "Akshat") {
	        winner = "Malvika";
	    } else {
	        winner = "Akshat";
	    }
	    
	    if (r == 0 || c == 0) {
	        break;
	    }
	}
	
	cout << winner;

}

// the link : https://codeforces.com/problemset/problem/451/A
