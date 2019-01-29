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
        if (root == null) {
            return -1;
        }
        Queue<TreeNode> q = new LinkedList<>();
        Set<Integer> s = new HashSet<>();
        List&tl;Integer> a = new ArrayList<>();
        q.add(root);
        while (!q.isEmpty()) {
            TreeNode p = q.poll();
            if (!s.contains(p.val)) {
                a.add(p.val);
            }
            s.add(p.val);
            if (p.left != null) { q.add(p.left); }
            if (p.right != null) { q.add(p.right); }
        }
        Collections.sort(a);
        return a.size() >= 2 ? a.get(1) : -1;
    }
}
