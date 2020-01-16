// https://helloacm.com/algorithms-to-check-if-array-contains-duplicate-elements/
// EASY, HASH SET

/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let data = new Set();
    for (let x of nums) {
        if (data.has(x)) {
            return true;
        }
        data.add(x);
    }
    return false;
};
