class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        
        for (int num : nums) {
            result ^= num;
        }
        
        return result;
    }
};

// the link : https://leetcode.com/problems/single-number/?envType=problem-list-v2&envId=array
