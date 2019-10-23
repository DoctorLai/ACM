// https://helloacm.com/passengers-pick-up-and-drop-off-algorithms-car-pooling-via-greedy-algorithm/
// https://leetcode.com/problems/car-pooling/
// MEDIUM, GREEDY, HASH MAP

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int travel[1001] = { 0 };
        for (const auto n: trips) {
            travel[n[1]] += n[0];
            travel[n[2]] -= n[0];
        }
        int cur = 0;
        for (int i = 0; i < 1001; ++ i) {
            cur += travel[i];
            if (cur > capacity) {
                return false;
            }
        }
        return true;
    }
};
