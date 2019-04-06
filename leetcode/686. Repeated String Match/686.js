// https://helloacm.com/the-repeated-string-match-algorithm-in-javascript/
// https://leetcode.com/problems/repeated-string-match/

/**
 * @param {string} A
 * @param {string} B
 * @return {number}
 */
var repeatedStringMatch = function(A, B) {
    var c = "";
    for (var i = 0; i < B.length/A.length + 1; ++ i) {
        c += A;
        if (c.includes(B)) {
            return i + 1;
        }
    }
    return -1;
};
