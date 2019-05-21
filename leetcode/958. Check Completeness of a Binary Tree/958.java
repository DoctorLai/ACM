// https://helloacm.com/breadth-first-search-algorithm-to-check-completeness-of-a-binary-tree/
// https://leetcode.com/problems/check-completeness-of-a-binary-tree/

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
    public boolean isCompleteTree(TreeNode root) {
        if (root == null) return true;
        Queue<TreeNode> q = new LinkedList<TreeNode>();
        q.add(root);
        boolean end = false;
        while (!q.isEmpty()) {
            TreeNode p = q.poll();   // remove the node from the queue
            if (p == null) {
                end = true; 
            } else {
                if (end) return false;  // not complete because we meet other leaves
                q.add(p.left);
                q.add(p.right);
            }
        }
        return true;
    }
}
