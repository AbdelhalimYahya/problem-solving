class Solution {
public:
    long long isqrt(long long n) {
        if (n < 2) return n;
        long long x = n;      
        long long y = (x + 1) / 2;  
        while (y < x) {
            x = y;
            y = (x + n / x) / 2;
        }
        return x;
    }

    int mySqrt(long long x) {
        int result = isqrt(x);
        return result;
    }
};

// the link : https://leetcode.com/problems/sqrtx/
