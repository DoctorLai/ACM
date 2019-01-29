// https://helloacm.com/how-to-find-second-minimum-node-in-a-binary-tree-java/
// https://leetcode.com/problems/second-minimum-node-in-a-binary-tree//

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
    private void dfs(TreeNode root, Set<integer> s) {
        if (root == null) {
            return;
        }
        if (!s.contains(root.val)) {
            s.add(root.val);
        }
        dfs(root.left, s);
        dfs(root.right, s);
    }

    public int findSecondMinimumValue(TreeNode root) {
        if (root == null) {
            return -1;
        }
        Set<Integer&t; a = new HashSet<>();
        dfs(root, a);
        List<Integer> b = new ArrayList<>(a);
        Collections.sort(b);
        return b.size() >= 2 ? b.get(1) : -1;
    }
}
