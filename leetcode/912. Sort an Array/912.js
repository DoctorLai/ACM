// https://helloacm.com/javascript-coding-exercise-the-quicksort-implementation-in-javascript/
// https://leetcode.com/problems/sort-an-array/

/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArray = function(nums) {
    if (nums.length === 0) return [];
    // pick a random value e.g. random.choice
    let x = nums[Math.floor(Math.random() * nums.length)];
    let lt = [];
    let eq = [];
    let gt = [];
    // separate into three groups
    nums.map(a => {
       if (a < x) lt.push(a);
       else if (a === x) eq.push(a);
       else gt.push(a);
    });
    // concatenate the part results
    let n = sortArray(lt);
    n.push(...eq);
    n.push(...sortArray(gt));
    return n;
};
