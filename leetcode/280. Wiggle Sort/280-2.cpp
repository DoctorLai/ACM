// https://helloacm.com/the-wiggle-sort-algorithm-on-array-of-integers/
// https://leetcode.com/problems/wiggle-sort/

class Solution {
public:
    void wiggleSort(vector<int>& nums) {        
        for (int i = 0; i + 1 < nums.size(); ++ i) {
            if ((i % 2) == (nums[i] < nums[i + 1])) {
                swap(nums[i], nums[i + 1]);
            }
        }
    }
};
