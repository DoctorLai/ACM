// https://helloacm.com/finding-two-numbers-of-given-sum-in-binary-search-tree/
// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

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
    public boolean findTarget(TreeNode root, int k) {
        if (root == null) return false;
        Queue<TreeNode> q = new LinkedList<TreeNode>();
        HashSet<Integer> data = new HashSet<Integer>();
        q.add(root);
        while(q.size() > 0) {
            TreeNode p = q.poll();
            if (data.contains(p.val)) return true;
            data.add(k - p.val);
            if (p.left != null) q.add(p.left);
            if (p.right != null) q.add(p.right);
        }
        return false;
    }    
}