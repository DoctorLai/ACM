// https://helloacm.com/how-to-compute-the-number-complement-for-integers/
// https://leetcode.com/problems/number-complement/

/**
 * @param {number} num
 * @return {number}
 */
var findComplement = function(num) {
    const binary = num.toString(2).split("");
    return parseInt(binary.map( b => b == '0' ? '1' : '0' ).join(""), 2);
};
