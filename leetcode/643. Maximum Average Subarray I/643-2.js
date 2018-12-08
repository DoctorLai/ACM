// https://helloacm.com/how-to-compute-the-maximum-average-subarray/
// https://leetcode.com/problems/maximum-average-subarray-i/

/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findMaxAverage = function(nums, k) {    
    if (nums.length == 0) return 0;
    if (nums.length == 1) return nums[0];
    // compute the first average    
    let avg = nums.slice(0, k).reduce((a, b) => a + b, 0) / k;
    for (let i = 1; i + k <= nums.length; ++ i) {
        // compute the next possibilities
        let v = nums.slice(i, i + k).reduce((a, b) => a + b, 0 ) / k;
        // update the maximum
        avg = Math.max(avg, v);
    } 
    return avg;
};
