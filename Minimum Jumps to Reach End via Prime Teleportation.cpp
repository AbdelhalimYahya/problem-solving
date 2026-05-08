class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;  // fixed: was i % n
        }
        return true;
    }

    int minJumps(vector<int>& nums) {
        int n = nums.size();
        // BFS
        vector<int> dist(n, INT_MAX);
        unordered_map<int, vector<int>> primeToIndices;

        // For each number, find its prime factors and group indices
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            for (int p = 2; p * p <= x; p++) {
                if (x % p == 0) {
                    if (isPrime(p)) primeToIndices[p].push_back(i);
                    while (x % p == 0) x /= p;
                }
            }
            if (x > 1 && isPrime(x)) primeToIndices[x].push_back(i);
        }

        queue<int> q;
        dist[0] = 0;
        q.push(0);

        while (!q.empty()) {
            int i = q.front(); q.pop();

            // Adjacent steps
            for (int ni : {i - 1, i + 1}) {
                if (ni >= 0 && ni < n && dist[ni] == INT_MAX) {
                    dist[ni] = dist[i] + 1;
                    q.push(ni);
                }
            }

            // Prime teleportation
            if (isPrime(nums[i])) {
                int p = nums[i];
                if (primeToIndices.count(p)) {
                    for (int j : primeToIndices[p]) {
                        if (dist[j] == INT_MAX) {
                            dist[j] = dist[i] + 1;
                            q.push(j);
                        }
                    }
                    primeToIndices.erase(p); // avoid revisiting
                }
            }
        }

        return dist[n - 1];
    }
};

// the link : https://leetcode.com/problems/minimum-jumps-to-reach-end-via-prime-teleportation/description/?envType=daily-question&envId=2026-05-08
