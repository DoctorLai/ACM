// https://helloacm.com/how-to-find-n-repeated-element-in-size-2n-array/ 
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

/**
 * @param {number[]} A
 * @return {number}
 */
var repeatedNTimes = function(A) {
    let hash = {};
    for (let x of A) {
        if (hash[x]) {
            return x;
        }
        hash[x] = true;
    }
};