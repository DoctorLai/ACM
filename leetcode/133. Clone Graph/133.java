// https://helloacm.com/how-to-clone-a-graph-in-c-java-using-depth-first-search-algorithm-graph-and-hashmap/
// https://leetcode.com/problems/clone-graph/

/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> neighbors;

    public Node() {}

    public Node(int _val,List<Node> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
class Solution {
    public Node cloneGraph(Node node) {
        if (copied.containsKey(node)) { // graph node cloned already
            return copied.get(node);
        }
        Node root = new Node(node.val, new ArrayList<Node>());
        copied.put(node, root); // mark it cloned to avoid duplication
        for (Node n: node.neighbors) {
            root.neighbors.add(cloneGraph(n)); // clone the neighbours recursively
        }
        return root;
    }

    private HashMap<Node, Node> copied = new HashMap<>();
}
