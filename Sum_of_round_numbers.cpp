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
		int n, count = 0;
		cin >> n;

		string num = to_string(n);
		int lind = num.length() - 1;
		string zero = "";
		string answer = "";

		for (int i = lind; i >= 0; i--) {
			if (num[i] != '0') {
				count++;
				zero = string(lind - i, '0');
				answer = num[i] + zero + " " + answer;
			}
		}

		cout << count << endl;
		cout << answer << endl;
	}
}

// the link : https://codeforces.com/contest/1352/problem/A
