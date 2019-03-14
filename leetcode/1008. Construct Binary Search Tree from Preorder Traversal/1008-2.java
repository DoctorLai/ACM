// https://helloacm.com/how-to-construct-binary-search-tree-from-preorder-traversal-c-and-java/
// https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/

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
    public TreeNode bstFromPreorder(int[] preorder) {
        if (preorder == null || preorder.length == 0) return null;
        int root = preorder[0];
        int r = preorder.length;
        for (int i = 1; i < preorder.length; ++ i) {
            if (preorder[i] >= root) {
                r = i;
                break;
            }
        }
        TreeNode rootNode = new TreeNode(root);
        int[] leftTree = null;
        if (r >= 1) {
            leftTree = Arrays.copyOfRange(preorder, 1, r);
        }
        int[] rightTree = Arrays.copyOfRange(preorder, r, preorder.length);
        rootNode.left = bstFromPreorder(leftTree);
        rootNode.right = bstFromPreorder(rightTree);
        return rootNode;
    }
}
