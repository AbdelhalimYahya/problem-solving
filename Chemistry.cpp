#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int test;
	cin >> test;

	while (test--) {
		int alphabet[26] = { 0 };
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;

		for (int i = 0; i < s.size(); i++) {
			int box = s[i] - 'a';
			alphabet[box]++;
		}

		int odd = 0;
		for (int i = 0; i < 26; i++) {
			if (alphabet[i] & 1) odd++;
		}

		int target = (n - k) & 1;

		int diff = abs(odd - target);
		if (diff <= k && ((odd - target) & 1) == (k & 1)) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}

// the link : https://codeforces.com/problemset/problem/1883/B
