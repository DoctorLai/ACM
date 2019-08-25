// https://helloacm.com/compute-the-minimum-costs-to-connect-the-sticks-using-priority-queue-or-heap/
// https://leetcode.com/problems/minimum-cost-to-connect-sticks/

class Solution {
public:
    int connectSticks(vector<int>& sticks) {
        priority_queue<int , vector<int>, greater<int> pq(begin(sticks), end(sticks)); 
        int res = 0; 
        while (pq.size() > 1) { 
            int first = pq.top();
            pq.pop(); 
            int second = pq.top();
            pq.pop(); 
            res += first + second;
            pq.push(first + second);
        } 
        return res;        
    }
};
