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
        dfs(root, null);
        return count;
    }
    
    private boolean dfs(TreeNode root, TreeNode parent) {
        if (root == null) {
            return true;
        }
        if ((!dfs(root.left, root)) | (!dfs(root.right, root))) {
            return false;
        }
        
        count ++;
        return parent == null || parent.val == root.val;
    }
    
    private int count = 0;
}
