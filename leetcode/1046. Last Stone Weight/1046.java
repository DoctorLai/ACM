// https://helloacm.com/how-to-use-priority-queue-in-java-or-c-to-compute-last-stone-weight/
// https://leetcode.com/problems/last-stone-weight/
// EASY, PRIORITY QUEUE

class Solution {
    public int lastStoneWeight(int[] stones) {
        Queue<Integer> pq = new PriorityQueue<Integer>(stones.length, (a, b) -> b - a);
        for (int x: stones) {
            pq.offer(x);
        }
        while (pq.size() > 1) {
            int a = pq.peek();
            pq.poll();
            int b = pq.peek();
            pq.poll();
            if (a != b) {
                pq.offer(a - b);
            }
        }
        return pq.isEmpty() ? 0 : pq.peek();
    }
}
