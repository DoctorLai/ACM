// https://helloacm.com/depth-first-search-algorithm-to-find-leaves-of-a-binary-tree/
// https://leetcode.com/problems/find-leaves-of-binary-tree/

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
    public List<List<Integer>> findLeaves(TreeNode root) {
        List<List<Integer>> r = new ArrayList<List<Integer>>();
        dfs(root, r);
        return r;
    }
    
    private int dfs(TreeNode root, List<List<Integer>> r) {
        if (root == null) return 0; // leave nodes are depth 0.
        // the depth is the max between two branches + 1
        int h = Math.max(dfs(root.left, r), dfs(root.right, r)) + 1;
        if (r.size() < h) {
            r.add(new ArrayList<Integer>());
        }
        r.get(h - 1).add(root.val); // put the 'leave' to its level
        return h;
    }
}
