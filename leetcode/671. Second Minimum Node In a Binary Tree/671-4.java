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
    private int dfs(TreeNode root, int m) {
        if (root == null) {
            return Integer.MAX_VALUE;
        }
        if (root.val > m) {
            return root.val;
        }
        int min1 = dfs(root.left, m);
        int min2 = dfs(root.right, m);
        return Math.min(min1, min2);
    }

    public int findSecondMinimumValue(TreeNode root) {
        int v = dfs(root, root.val);
        return v == Integer.MAX_VALUE ? -1 : v;
    }
}
