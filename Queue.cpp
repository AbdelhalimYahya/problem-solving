#include <bits/stdc++.h>
using namespace std;

struct process {
    string name;
    int time;  
    int totalTime;  
};

int main() {
    int n, q, total = 0;
    cin >> n >> q;
    
    queue<process> qu;
    vector<process> ans;
    
    for (int i = 0; i < n; i++) {
        string name;
        int time;
        cin >> name >> time;
        qu.push({name, time, 0});
    }
    
    while (!qu.empty()) {
        if (qu.front().time > q) {
            qu.front().time -= q;
            total += q;                 
            process temp = qu.front();
            qu.pop();
            qu.push(temp);
        } else {
            total += qu.front().time;
            qu.front().totalTime = total;
            ans.push_back(qu.front());
            qu.pop();
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans[i].name << " " << ans[i].totalTime << endl;
    }
}

// the link : https://github.com/AbdelhalimYahya/problem-solving
