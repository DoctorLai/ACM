// https://helloacm.com/number-of-recent-calls-queue-data-structure-exercise/
// https://leetcode.com/problems/number-of-recent-calls/

class RecentCounter {
public:
    RecentCounter() {
    }
 
    int ping(int t) {
        time.push(t);
        while (time.front() < t - 3000) {
            time.pop();
        }
        return time.size();
    }
private:
    queue<int> time;
};
