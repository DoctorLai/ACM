// https://helloacm.com/k-closest-points-to-origin-algorithm-by-using-priority-queues-in-c-java/
// https://leetcode.com/problems/k-closest-points-to-origin/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        auto cmp = [](vector<int> &a, vector<int> &b) {
            return a[0]*a[0]+a[1]*a[1] > b[0]*b[0]+b[1]*b[1];
        };
        priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> pq(cmp);
        for (int i = 0; i < points.size(); ++ i) {
            pq.push(points[i]);
        }
        vector<vector<int>> r;
        for (int i = 0; i < K; ++ i) {
            r.push_back(pq.top());
            pq.pop();
        }
        return r;
    }
};
