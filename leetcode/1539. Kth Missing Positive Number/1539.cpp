// https://helloacm.com/algorithm-to-find-the-kth-missing-positive-number-in-array/
// https://leetcode.com/problems/kth-missing-positive-number/
// EASY, HASH MAP

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_set<int> data(begin(arr), end(arr));
        int j = 1;
        for (int i = 0; i < k; ++ i) {
            while (data.count(j)) j ++;
            j ++;
        }
        return j - 1;
    }
};
