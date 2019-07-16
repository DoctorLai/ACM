// https://helloacm.com/relative-sort-array-algorithm-sort-array-based-on-predefined-sequence/
// https://leetcode.com/problems/relative-sort-array/

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int counter[1001] = { 0 };
        for (const auto &n: arr1) {
            counter[n] ++;
        }        
        vector<int> res;
        for (const auto &n: arr2) {
            while (counter[n] -- > 0) {
                res.push_back(n);
            }
        }
        for (int i = 0; i < 1001; ++ i) {
            while (counter[i] -- > 0) {
                res.push_back(i);
            }
        }        
        return res;
    }
};
