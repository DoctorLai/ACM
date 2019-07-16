// https://helloacm.com/relative-sort-array-algorithm-sort-array-based-on-predefined-sequence/
// https://leetcode.com/problems/relative-sort-array/

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> data;
        for (int i = 0; i < arr2.size(); ++ i) {
            data[arr2[i]] = i;
        }
        sort(begin(arr1), end(arr1), [&](auto &a, auto &b) {
            bool aa = data.find(a) != data.end();
            bool bb = data.find(b) != data.end();
            if (aa && bb) {
                return data[a] < data[b];
            }
            if ((!aa) && (!bb)) {
                return a < b;
            }
            return aa;
        });
        return arr1;
    }
};
