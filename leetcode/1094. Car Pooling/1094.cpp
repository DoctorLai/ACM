// https://helloacm.com/passengers-pick-up-and-drop-off-algorithms-car-pooling-via-greedy-algorithm/
// https://leetcode.com/problems/car-pooling/

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, int> data;
        for (const auto &n: trips) {
            int start = n[1];
            int end = n[2];
            int num = n[0];
            data[start] += num;
            data[end] -= num;
        }
        int s = 0;
        for (auto it = data.begin(); it != data.end(); ++ it) {
            s += it->second;
            if (s > capacity) return false;
        }
        return true;
    }
};
