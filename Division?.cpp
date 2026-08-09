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
		int rating;
		cin >> rating;

		if (rating < 1400) {
			cout << "Division 4" << endl;
		}
		else if (rating < 1600 && rating >= 1400) {
			cout << "Division 3" << endl;
		}
		else if (rating < 1900 && rating >= 1600) {
			cout << "Division 2" << endl;
		}
		else {
			cout << "Division 1" << endl;
		}
	}
}

// the link : https://codeforces.com/contest/1669/problem/A
