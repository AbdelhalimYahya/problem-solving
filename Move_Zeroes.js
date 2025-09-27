/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    let count = 0;

    for (let i = 0 ; i < nums.length ; i++) {
        if (nums[i] == 0) {
            nums.splice(i , 1);
            count++;
            i--;
        }
    }

    for (let j = 0 ; j < count ; j++) {
        nums.push(0);
    }
    
};

// the link : https://leetcode.com/problems/move-zeroes/

// Alternative soluion that beats 100%

/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    let left = 0;
    let right = 0;
    while (right < nums.length) {
        if (nums[right] !== 0) {
            [nums[right] , nums[left]] = [nums[left] , nums[right]];
            left++;
        }
        right++;
    }
};
