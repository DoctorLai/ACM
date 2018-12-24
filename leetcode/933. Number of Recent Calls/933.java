// https://helloacm.com/number-of-recent-calls-queue-data-structure-exercise/
// https://leetcode.com/problems/number-of-recent-calls/

class RecentCounter {
    public RecentCounter() {
         time = new LinkedList<Integer>();
    }
    
    public int ping(int t) {
        time.add(t);
        while (time.peek() < t - 3000) {
            time.poll();
        }
        return time.size();
    }
    
    private Queue<Integer> time;
}

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter obj = new RecentCounter();
 * int param_1 = obj.ping(t);
 */
