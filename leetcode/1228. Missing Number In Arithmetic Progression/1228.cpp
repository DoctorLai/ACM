// https://helloacm.com/how-to-find-the-missing-number-in-arithmetic-progression/
// https://leetcode.com/problems/missing-number-in-arithmetic-progression/

class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int d = arr.back() - arr[0];
        int s = d / (int)arr.size();
        int t = arr[0];
        for (int i = 1; i < n; ++ i) {
            t += s;
            if (arr[i] != t) {
                return t;
            }
        }
        return 0;
    }
};
