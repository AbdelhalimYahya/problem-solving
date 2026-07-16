#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	
	while (test--) {
	   string s;
	   cin >> s;
	   
	   vector<int> first;
	   vector<int> second;
	   
	   
	   for (int i = 0 ; i < s.size() ; i++) {
	       if (i < 3) {
	           first.push_back(s[i] - '0');
	       } else {
	           second.push_back(s[i] - '0');
	       }
	   }
	   
	   if ( (first[0]+first[1]+first[2]) == (second[0]+second[1]+second[2]) ) {
	       cout << "YES" << endl;
	   } else {
	       cout << "NO" << endl;
	   }
	}


    return 0;
}

// the link : https://codeforces.com/problemset/problem/1676/A
