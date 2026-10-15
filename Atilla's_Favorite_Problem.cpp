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
	    string word;
	    cin >> word;
	    
	    // the metrics
	    char max = 'U';
	    
	    for(int i = 0 ; i < word.size() ; i++) {
	        if (word[i] >= max) {
	            max = word[i];
	        }
	    }
	    
	    cout << (int)max - (int)'a'  + 1<< endl;
	}

}

// the link : https://codeforces.com/contest/1760/problem/B
