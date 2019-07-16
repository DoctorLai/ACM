// https://helloacm.com/relative-sort-array-algorithm-sort-array-based-on-predefined-sequence/
// https://leetcode.com/problems/relative-sort-array/

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> data;
        for (const auto &n: arr2) {
            data.insert(n);
        }
        map<int, int> others;
        unordered_map<int, int> counter;
        for (const auto &n: arr1) {
            if (data.find(n) == data.end()) {
                others[n] ++;
            } else {
                counter[n] ++;
            }
        }
        vector<int> res;
        for (const auto &n: arr2) {
            for (int i = 0; i < counter[n]; ++ i) {
                res.push_back(n);
            }
        }
        for (auto it = others.begin(); it != others.end(); ++ it) {
            for (int i = 0; i < it->second; ++ i) {
                res.push_back(it->first);
            }
        }
        return res;
    }
};
