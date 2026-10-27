#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    list<int> L;

    while (n--) {
        string command;
        cin >> command;

        if (command == "insert") {
            int x;
            cin >> x;
            L.push_front(x);
        }
        else if (command == "delete") {
            int x;
            cin >> x;
            for (auto it = L.begin(); it != L.end(); ++it) {
                if (*it == x) {
                    L.erase(it);
                    break;
                }
            }
        }
        else if (command == "deleteFirst") {
            L.pop_front();
        }
        else if (command == "deleteLast") {
            L.pop_back();
        }
    }

    bool first = true;
    for (int x : L) {
        if (!first) cout << " ";
        cout << x;
        first = false;
    }
    cout << "\n";

    return 0;
}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_C
