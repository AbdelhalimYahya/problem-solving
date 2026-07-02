#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(4);

    for (int i = 0; i < 4; i++) {
        cin >> a[i];
	}

	string s;
	cin >> s;

	int sum = 0;

    for (int i = 0; i < s.size(); i++) {
		int num = s[i] - '0';
		sum += a[num - 1];
		
	}
	
	cout << sum;

    return 0;
}

// the link : https://codeforces.com/problemset/problem/431/A
