// https://helloacm.com/how-to-compute-the-number-of-equivalent-domino-pairs/
// https://leetcode.com/problems/number-of-equivalent-domino-pairs/

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int, int> data;
        for (const auto &n: dominoes) {
            const auto [minv, maxv] = minmax_element(begin(n), end(n));
            int key = *minv * 10 + *maxv;
            data[key] ++;
        }
        int res = 0;
        for (auto it = data.begin(); it != data.end(); ++ it) {
            auto key = it->first;
            res += data[key] * (data[key] - 1) / 2;
        }
        return res;
    }
};
