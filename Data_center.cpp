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

	int n , a , b;
	cin >> n;

  // (1,36), (2,18), (3,12), (4,9), (6,6)  =========>   math to get the closest one 
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			a = i;
			b = n / i;
		}
	}

	cout << 2 * (a + b) << endl;
}

// the link : https://codeforces.com/problemset/problem/1250/F
