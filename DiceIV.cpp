#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int a; cin >> a;
    int b[(a * 6) + 1];
    for (int i = 1; i <= a * 6; i++) cin >> b[i];
    string q = "CCCCNCCCCNCCCCNCCCCNECCCCEECCCCE";
    for (int i = 0; i < a; i++) {
        for (int o = 0; o < a; o++) {
            if (i == o) break;
            for (int u = 0; u < q.length(); u++) {
                int g = 0;
                if (q[u] == 'N') {
                    int o = b[1]; b[1] = b[2]; b[2] = b[6]; b[6] = b[5]; b[5] = o; 
                } else if (q[u] == 'E') {
                    int o = b[1]; b[1] = b[4]; b[4] = b[6]; b[6] = b[3]; b[3] = o; 
                } else if (q[u] == 'C') {
                    int o = b[2]; b[2] = b[3]; b[3] = b[5]; b[5] = b[4]; b[4] = o;
                }
                for (int p = 1; p <= 6; p++) {
                    if (b[i * 6 + p] == b[o * 6 + p]) g++;
                    if (g == 6) {
                       cout << "No" << endl;
                       return 0;
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_11_D
