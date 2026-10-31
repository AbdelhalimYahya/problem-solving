class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.find(needle) != string::npos) {
            return haystack.find(needle);
        } else {
            return -1;
        }
    }
};

// the link : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
