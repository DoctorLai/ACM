// https://helloacm.com/the-wiggle-sort-algorithm-on-array-of-integers/
// https://leetcode.com/problems/wiggle-sort/

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(begin(nums), end(nums)); // sorting takes O(nlogn)
        for (int i = 1; i + 1 < nums.size(); i += 2) {
            swap(nums[i], nums[i + 1]); 
        }
    }
};
