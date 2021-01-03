// https://helloacm.com/greedy-algorithm-to-put-maximum-units-on-a-truck/
// https://leetcode.com/problems/maximum-units-on-a-truck/
// EASY, GREEDY

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        auto cmp = [&](auto &a, auto &b) {
            return boxTypes[a][1] < boxTypes[b][1];
        };
        priority_queue<int, vector<int>, decltype(cmp)> pq(cmp);
        for (int i = 0; i < boxTypes.size(); ++ i) {
            pq.push(i);
        }
        int ans = 0;
        while (!pq.empty() && (truckSize > 0)) {
            auto b = pq.top();
            pq.pop();
            auto m = min(truckSize, boxTypes[b][0]);
            truckSize -= m;
            ans += m * boxTypes[b][1];
        }
        return ans;
    }
};
