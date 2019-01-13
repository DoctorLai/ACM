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
        PriorityQueue<Integer> q = new PriorityQueue<>();
        dfs(root, q);
        for (int i = 0; i < k - 1; ++ i) {
            q.poll();
        }
        return q.peek();
    }

    private void dfs(TreeNode root, PriorityQueue<Integer> q) {
        if (root == null) return;
        dfs(root.right, q);
        q.add(root.val);
        dfs(root.left, q);
    }
}
