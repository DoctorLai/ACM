// https://helloacm.com/how-to-find-kth-largest-element-in-an-array-c-coding-exercise/
// https://leetcode.com/problems/kth-largest-element-in-an-array/
// MEDIUM, BINARY SEARCH, ARRAY

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        auto minmax = minmax_element(begin(nums), end(nums));
        int left = *minmax.first;
        int right = *minmax.second;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            auto c = countLargerOrEqualThanK(nums, mid);
            if (c >= k) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return right;
    }
    
private:    
    int countLargerOrEqualThanK(vector<int>& nums, int k) {
        auto c = 0;
        for (auto x: nums) {
            if (x >= k) {
                c ++;
            }
        }
        return c;
    }    
};
