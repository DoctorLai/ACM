// https://helloacm.com/how-to-check-if-four-points-can-make-a-valid-square-c-and-java/
// https://leetcode.com/problems/valid-square/

class Solution {
    public boolean validSquare(int[] p1, int[] p2, int[] p3, int[] p4) {
        Set<Integer> d = new HashSet();
        d.add(dist(p1, p2));
        d.add(dist(p1, p3));
        d.add(dist(p1, p4));
        d.add(dist(p2, p3));
        d.add(dist(p2, p4));
        d.add(dist(p3, p4));
        return d.size() == 2 && (!d.contains(0));
    }
    
    private int dist(int[] p1, int[] p2) {
        return (int)Math.pow(p1[0] - p2[0], 2) + (int)Math.pow(p1[1] - p2[1], 2);
    }
}
