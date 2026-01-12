class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];  // Move valid element to position k
                k++;
            }
        }
        
        return k;
    }
};

// also we can use a new array and insert all of the elements that is not equal to val

// the link : https://leetcode.com/problems/remove-element/description/?envType=problem-list-v2&envId=array
