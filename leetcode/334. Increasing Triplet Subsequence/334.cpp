// https://helloacm.com/the-on-increasing-triplet-subsequence-algorithm/
// https://leetcode.com/problems/increasing-triplet-subsequence/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;
        for (const auto &n: nums) {
            if (n <= first) {
                first = n;
            } else if (n <= second) {
                second = n;
            } else return true;
        }
        return false; // can't find such triplet increasing subsequence
    }
};
