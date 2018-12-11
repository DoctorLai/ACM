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
        ArrayList<Integer> arr = new ArrayList<Integer>();
        dfs(root, arr);
        int i = 0, j = arr.size() - 1;
        while (i < j) {
            if (arr.get(i) + arr.get(j) == k) return true;
            if (arr.get(i) + arr.get(j) > k) {
                j --;
            } else {
                i ++;
            }
        }
        return false;
    }
    
    private void dfs(TreeNode root, ArrayList<Integer> arr) {
        if (root == null) return;
        dfs(root.left, arr);
        arr.add(root.val);
        dfs(root.right, arr);
    }
}