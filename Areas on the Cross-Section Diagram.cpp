#include <bits/stdc++.h>
using namespace std;

int main() {
    string game;
    getline(cin, game);  
    
    while (!game.empty() && (game.back() == '\r' || game.back() == '\n')) {
        game.pop_back();
    }
    
    stack<int> downs;
    //         indx  area
    stack<pair<int , int>> water;
    
    for (int i = 0 ; i < game.size() ; i++) {
        if (game[i] == '\\') {
            downs.push(i);
        } else if (game[i] == '/') {
            if (!downs.empty()) {
                int start = downs.top();
                int currentArea = i - start;
                downs.pop();

                while (!water.empty() && water.top().first > start) { 
                    currentArea += water.top().second;
                    water.pop();
                }
                water.push({start, currentArea}); 
            }
        }
    }
    
    vector<int> finalAns;
    int totalArea = 0; 
    
    while (!water.empty()) {
        finalAns.push_back(water.top().second);
        totalArea += water.top().second; 
        water.pop();
    }
    
    cout << totalArea << endl; 
    cout << finalAns.size();
    for (int i = finalAns.size() - 1; i >= 0; i--) { 
        cout << " " << finalAns[i];
    }
    
    cout << endl; 
    
    return 0; 
}

// the link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_D
