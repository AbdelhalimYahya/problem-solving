class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int freq[26] = {0};  // Array for 26 lowercase letters
        
        // Count frequency of each character
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        int expected = 0;
        
        // Find the first non-zero frequency as reference
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                expected = freq[i];
                break;
            }
        }
        
        // Check if all non-zero frequencies are equal to expected
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0 && freq[i] != expected) {
                return false;
            }
        }
        
        return true;
    }
};

// the link : https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/?envType=problem-list-v2&envId=string
