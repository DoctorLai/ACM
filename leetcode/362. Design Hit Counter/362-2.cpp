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
        int t = timestamp % 360;
        if (time[t] != timestamp) {
            time[t] = timestamp; // timestamps could be 300, 600, 900
            hits[t] = 1;  // reset the counter
        } else {
            hits[t] ++;  // same timestamp, update hits
        }
    }
    
    /** Return the number of hits in the past 5 minutes.
        @param timestamp - The current timestamp (in seconds granularity). */
    int getHits(int timestamp) {
        int r = 0;
        for (int i = 0; i < 360; ++ i) {
            if (timestamp - time[i] < 300) {
                r += hits[i];
            }
        }
        return r;
    }
    
private:
    int time[360] = { -1 };
    int hits[360] = { 0 };
};
