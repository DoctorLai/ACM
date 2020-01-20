// https://helloacm.com/recursive-depth-first-search-algorithm-to-delete-leaves-with-a-given-value-in-a-binary-tree/
// https://leetcode.com/problems/delete-leaves-with-a-given-value/
// MEDIUM, RECURSION, DFS, BINARY TREE

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
    public TreeNode removeLeafNodes(TreeNode root, int target) {
        if (root == null) return null;
        if (root.left != null) {
            root.left = removeLeafNodes(root.left, target);
        }
        if (root.right != null) {
            root.right = removeLeafNodes(root.right, target);
        }
        if (root.left == root.right && root.val == target) {
            return null;
        }
        return root;        
    }
}
