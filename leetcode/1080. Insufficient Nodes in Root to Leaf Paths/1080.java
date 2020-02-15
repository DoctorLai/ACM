// https://helloacm.com/depth-first-search-algorithm-to-delete-insufficient-nodes-in-root-to-leaf-paths-in-binary-tree/
// https://leetcode.com/problems/insufficient-nodes-in-root-to-leaf-paths/
// RECURSION, DFS, BINARY TREE

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
    public TreeNode sufficientSubset(TreeNode root, int limit) {
        if (root == null) {
            return null;
        }
        if (root.left == root.right) {
            if (root.val < limit) {
                return null;
            }
            return root;
        }
        root.left = sufficientSubset(root.left, limit - root.val);
        root.right = sufficientSubset(root.right, limit - root.val);
        return root.left == root.right ? null : root;
    }
}
