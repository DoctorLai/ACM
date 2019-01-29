// https://helloacm.com/how-to-find-second-minimum-node-in-a-binary-tree-java/
// https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    private int min1;
    long ans = Long.MAX_VALUE;

    private void dfs(TreeNode root) {
        if (root == null) return;
        if (min1 < root.val && root.val < ans) {
            ans = root.val;
        } else if (min1 == root.val) {
            dfs(root.left);
            dfs(root.right);
        }
    }

    public int findSecondMinimumValue(TreeNode root) {
        min1 = root.val;
        dfs(root);
        return ans < Long.MAX_VALUE ? (int)ans : -1;
    }
}
