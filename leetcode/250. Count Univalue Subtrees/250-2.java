// https://helloacm.com/how-to-count-univalue-subtrees-in-a-binary-tree/
// https://leetcode.com/problems/count-univalue-subtrees/

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
    public int countUnivalSubtrees(TreeNode root) {
        if (root == null) return 0;
        dfs(root);
        return count;
    }
    
    private boolean dfs(TreeNode root) {
        if (root.left == null && root.right == null) {
            count ++;
            return true;
        }
        boolean valid = true;
        if (root.left != null) {
            valid = dfs(root.left) && valid && root.left.val == root.val;
        }
        if (root.right != null) {
            valid = dfs(root.right) && valid && root.right.val == root.val;
        }
        if (valid) count ++;
        return valid;
    }
    
    private int count = 0;
}
