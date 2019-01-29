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
    public int findSecondMinimumValue(TreeNode root) {
        if(root.left == null)   return -1;

        int left  = (root.left.val  == root.val) ? findSecondMinimumValue(root.left)  : root.left.val;
        int right = (root.right.val == root.val) ? findSecondMinimumValue(root.right) : root.right.val;

        if(left  == -1)         return right;
        if(right == -1)         return left;

        return Math.min(left, right);
    }
}
