// https://helloacm.com/set-mismatch-find-the-duplicate-and-missing-number-in-array/
// https://leetcode.com/problems/set-mismatch/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> data = {-1, -1};
        for (int i = 0; i < nums.size(); ++ i) {
            int n = abs(nums[i]);
            if (nums[n - 1] < 0) {
                data[0] = n;
            } else {
                nums[n - 1] *= -1;
            }
        }
        for (int i = 0; i < nums.size(); ++ i) {
            if (nums[i] > 0) {
                data[1] = i + 1;
            }
        }        
        return data;
    }
};
