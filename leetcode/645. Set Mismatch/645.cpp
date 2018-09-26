// https://helloacm.com/set-mismatch-find-the-duplicate-and-missing-number-in-array/
// https://leetcode.com/problems/set-mismatch/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> data = {-1, 1};
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i ++) {
            if (nums[i - 1] == nums[i]) {
                data[0] = nums[i - 1];
            } else if (nums[i] > nums[i - 1] + 1) {
                data[1] = nums[i - 1] + 1;
            }
        }
        if (nums[nums.size() - 1] != nums.size()) {
            data[1] = nums.size();
        }
        return data;
    }
};    
