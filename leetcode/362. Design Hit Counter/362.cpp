// https://helloacm.com/how-to-design-a-high-performance-hit-counter-class/
// https://leetcode.com/problems/design-hit-counter/

class HitCounter {
public:
    /** Initialize your data structure here. */
    HitCounter() {
        
    }
    
    /** Record a hit.
        @param timestamp - The current timestamp (in seconds granularity). */
    void hit(int timestamp) {
        purge(timestamp, INTERVAL);
        Q.push(timestamp);
    }
    
    /** Return the number of hits in the past 5 minutes.
        @param timestamp - The current timestamp (in seconds granularity). */
    int getHits(int timestamp) {
        purge(timestamp, INTERVAL);
        return Q.size();
    }
        
private:
    queue<int> Q;
    int INTERVAL = 300; // 5 minutes
    
    void purge(int timestamp, int INTERVAL) {
       while (!Q.empty()) {
           auto p = Q.front();
           if (timestamp - p >= INTERVAL) {
               Q.pop();
           } else {
               break;
           }
       }         
    }
};

/**
 * Your HitCounter object will be instantiated and called as such:
 * HitCounter* obj = new HitCounter();
 * obj->hit(timestamp);
 * int param_2 = obj->getHits(timestamp);
 */
