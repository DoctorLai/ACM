// https://helloacm.com/return-the-path-that-sum-up-to-target-using-dfs-or-bfs-algorithms/
// https://leetcode.com/problems/path-sum-ii/
// MEDIUM, DFS, BINARY TREE, RECURSION

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
    function dfs(root, arr, s) {
        if (!root) return;
        arr.push(root.val);
        s -= root.val;
        if ((s === 0) && (root.left === null) && (root.right === null)) {
            ans.push(arr);
            return;
        }
        if (root.left) dfs(root.left, arr.slice(), s);
        if (root.right) dfs(root.right, arr.slice(), s);
    }
    dfs(root, [], sum);
    return ans;
};
