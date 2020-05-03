// https://helloacm.com/linear-algorithm-to-check-if-all-1s-are-at-least-length-k-places-away/
// https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
// MEDIUM, ARRAY

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int last = -k - 1;
        for (int i = 0; i < nums.size(); ++ i) {
            if (nums[i] == 1) {
                if (i - last - 1 < k) return false;
                last = i;
            }
        }
        return true;
    }
};
