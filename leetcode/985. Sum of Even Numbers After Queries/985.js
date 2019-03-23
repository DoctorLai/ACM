// https://helloacm.com/compute-the-sum-of-even-numbers-after-queries/
// https://leetcode.com/problems/sum-of-even-numbers-after-queries/

/**
 * @param {number[]} A
 * @param {number[][]} queries
 * @return {number[]}
 */
var sumEvenAfterQueries = function(A, queries) {
    var sum = [];
    var cursum = A.filter(x => x % 2 === 0).reduce( (a, b) => a + b, 0);
    for (var i = 0; i < queries.length; ++ i) {
        var idx = queries[i][1];
        var val = queries[i][0];
        if (A[idx] % 2 === 0) cursum -= A[idx];
        A[idx] += val;
        if (A[idx] % 2 === 0) cursum += A[idx];
        sum.push(cursum);
    }
    return sum;
};
