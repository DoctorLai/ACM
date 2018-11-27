// https://helloacm.com/how-to-find-first-and-last-position-of-element-in-sorted-array/
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    return [nums.indexOf(target), nums.lastIndexOf(target)];
};
