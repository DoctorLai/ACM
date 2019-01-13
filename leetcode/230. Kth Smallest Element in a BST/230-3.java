// https://helloacm.com/how-to-find-the-kth-smallest-element-in-a-bst-tree-using-java-c/
// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

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
    public int kthSmallest(TreeNode root, int k) {
        int cnt = count(root.left);
        if (cnt + 1 == k) return root.val;
        // on the left sub tree
        if (k <= cnt) return kthSmallest(root.left, k);
        // on the right sub tree
        return kthSmallest(root.right, k - cnt - 1);
    }

    // count the number of nodes in the tree
    private int count(TreeNode root) {
        if (root == null) return 0;
        return 1 + count(root.left) + count(root.right);
    }
}
