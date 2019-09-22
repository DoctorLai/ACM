// https://helloacm.com/the-minimum-absolute-difference-algorithm-of-an-array/
// https://leetcode.com/problems/minimum-absolute-difference/

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> r;
        sort(begin(arr), end(arr));        
        int D = INT_MAX;
        for (int i = 1; i < arr.size(); ++ i) {
            int d = arr[i] - arr[i - 1];
            if (d < D) {
                r.clear();
                D = d;
                r.push_back({arr[i - 1], arr[i]});
            } else if (d == D) {
                r.push_back({arr[i - 1], arr[i]});
            }
        }        
        return r;
    }
};
