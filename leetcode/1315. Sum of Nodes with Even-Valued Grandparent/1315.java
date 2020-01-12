// https://helloacm.com/recursive-depth-first-search-algorithm-to-compute-the-sum-of-nodes-with-even-valued-grandparent-in-a-binary-tree/
// https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/
// MEDIUM, DFS, RECURSION

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
    private int sum = 0;
    
    public int sumEvenGrandparent(TreeNode root) {
        dfs(root, null, null);
        return sum;
    }
    
    private void dfs(TreeNode root, TreeNode parent, TreeNode grandparent) {
        if (root == null) return;
        if (grandparent != null && (grandparent.val % 2 == 0)) {
            sum += root.val;
        }
        dfs(root.left, root, parent);
        dfs(root.right, root, parent);
    }
}
