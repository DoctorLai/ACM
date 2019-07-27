// https://helloacm.com/how-to-find-the-largest-unique-number-in-array/
// https://leetcode.com/problems/largest-unique-number/

class Solution {
public:
    int largestUniqueNumber(vector<int>& A) {
        unordered_multiset<int> dup;
        int ans = -1;
        for (const auto &n: A) {
            dup.insert(n);
        }
        for (const auto &n: A) {
            if (dup.count(n) == 1) {
                ans = max(ans, n);
            }
        }        
        return ans;
    }
};
