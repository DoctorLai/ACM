// https://helloacm.com/how-to-summary-ranges-using-on-two-pointer-algorithm/
// https://leetcode.com/problems/summary-ranges/
// MEDIUM, TWO POINTERS

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i = 0, n = nums.size();
        vector<string> r;
        while (i < n) {
            int j = i;
            while ((j + 1 < n) && (nums[j] + 1 == nums[j + 1])) j ++;
            if (i == j) {
                r.push_back(std::to_string(nums[i]));
            } else {
                r.push_back(std::to_string(nums[i]) + "->" + std::to_string(nums[j]));
            }
            i = j + 1;
        }
        return r;
    }
};
