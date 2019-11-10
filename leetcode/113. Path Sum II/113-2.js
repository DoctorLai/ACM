// https://helloacm.com/return-the-path-that-sum-up-to-target-using-dfs-or-bfs-algorithms/
// https://leetcode.com/problems/path-sum-ii/
// MEDIUM, BFS, BINARY TREE, QUEUE

/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} sum
 * @return {number[][]}
 */
var pathSum = function(root, sum) {
    var ans = [];
    if (!root) return [];
    var q = [[root, [], sum]];
    while (q.length) {
        var p = q.shift();
        var cur = p[0];
        var path = p[1];
        var sum = p[2];
        sum -= cur.val;
        path.push(cur.val);
        if ((sum === 0) && (cur.left === null) && (cur.right === null)) {
            ans.push(path);
        }
        if (cur.left) q.push([cur.left, path.slice(), sum]);
        if (cur.right) q.push([cur.right, path.slice(), sum]);
    }
    return ans;
};
