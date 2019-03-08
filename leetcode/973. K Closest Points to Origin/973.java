// https://helloacm.com/k-closest-points-to-origin-algorithm-by-using-priority-queues-in-c-java/
// https://leetcode.com/problems/k-closest-points-to-origin/

class Solution {
    public int[][] kClosest(int[][] points, int K) {
        Comparator<int[]> cmp = new Comparator<int[]>() {
            @Override
            public int compare(int[] a, int[] b) {
                int x = a[0]*a[0]+a[1]*a[1];
                int y = b[0]*b[0]+b[1]*b[1];
                return x < y ? -1 : ((x == y) ? 0 : 1);
            }
        };
        PriorityQueue<int[]> pq = new PriorityQueue<>(cmp);
        for (int i = 0; i < points.length; ++ i) {
            pq.add(points[i]);
        }
        int[][] r = new int[K][];
        for (int i = 0; i < K; ++ i) {
            r[i] = pq.remove();
        }
        return r;
    }
}
