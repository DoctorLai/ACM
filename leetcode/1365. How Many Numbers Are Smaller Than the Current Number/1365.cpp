// https://helloacm.com/algorithms-to-count-how-many-numbers-are-smaller-than-the-current-number/
// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/submissions/
// EASY, BINARY SEARCH

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> r;
        vector<int> data(begin(nums), end(nums));
        sort(begin(data), end(data));
        for (const auto &n: nums) {
            int cnt = lower_bound(begin(data), end(data), n) - begin(data);
            r.push_back(cnt);
        }
        return r;
    }
};
