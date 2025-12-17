class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (auto it = nums.begin(); it != nums.end(); ++it) {
            if (seen.count(*it)) {
                return true;
            }
            seen.insert(*it);
        }

        return false;
    }
};

// The link : https://leetcode.com/problems/contains-duplicate/
