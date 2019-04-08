// https://helloacm.com/how-to-sum-the-root-to-leaf-in-binary-numbers-in-a-binary-tree-using-breadth-first-search/
// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/

import javafx.util.Pair;
 
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
    public int sumRootToLeaf(TreeNode root) {
        int sum = 0;
        if (root == null) return 0;
        Queue<Pair<TreeNode, Integer>> q = new LinkedList<Pair<TreeNode, Integer>>();
        q.add(new Pair(root, root.val));
        while (!q.isEmpty()) {
            Pair<TreeNode, Integer> p = q.poll(); // pop and return the node from the queue
            TreeNode node = p.getKey();
            int cur = p.getValue();
            if (node.left == null && node.right == null) { // sum up the from root to current leaf node
                sum += cur;
            } else {
                if (node.left != null) { // enqueue the left child
                    q.add(new Pair(node.left, cur * 2 + node.left.val));
                }
                if (node.right != null) { // enqueue the right child
                    q.add(new Pair(node.right, cur * 2 + node.right.val));
                }                
            }            
        }
        return sum;
    }
}
