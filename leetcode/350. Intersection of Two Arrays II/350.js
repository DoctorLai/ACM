// https://helloacm.com/the-intersection-algorithm-of-two-arrays-using-hash-maps-in-c-java-javascript/
// https://leetcode.com/problems/intersection-of-two-arrays-ii/

/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function(nums1, nums2) {
    var data = {};
    nums1.forEach(function(n) {
        if (!data[n]) {
            data[n] = 1;
        } else {
            data[n] ++;
        }        
    });
    var r = [];
    nums2.forEach(function(n) {
        if (data[n] && data[n] > 0) {
            r.push(n);
            data[n] --;
        }    
    });
    return r;
};
