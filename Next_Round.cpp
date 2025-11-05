// problem A VK Cup 2012 Qualification Round 1

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>

using namespace std;

int main() {
    int count = 0;
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++) {
        if (arr[j] >= arr[k - 1] && arr[j] != 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

// the link : https://codeforces.com/problemset/problem/158/A
