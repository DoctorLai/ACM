// https://helloacm.com/the-repeated-string-match-algorithm-in-javascript/
// https://leetcode.com/problems/repeated-string-match/

/**
 * @param {string} A
 * @param {string} B
 * @return {number}
 */
var repeatedStringMatch = function(A, B) {
    var c = "";
    var q = 0;
    for (; c.length < B.length; q ++) c += A;
    if (c.includes(B)) return q;
    if ((c + A).includes(B)) return q + 1;
    return -1;
};
