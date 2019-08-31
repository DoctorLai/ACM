// https://helloacm.com/how-to-find-the-largest-unique-number-in-array-using-javascript-functional-programming/
// https://leetcode.com/problems/largest-unique-number/

/**
 * @param {number[]} A
 * @return {number}
 */
var largestUniqueNumber = function(A) {
    const num = Math.max(...A.filter(a => A.indexOf(a) === A.lastIndexOf(a)));
    return isFinite(num) ? num : -1;
};
