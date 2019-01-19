// https://helloacm.com/how-to-find-n-repeated-element-in-size-2n-array/ 
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_set<int> st;
        for (const auto &n: A) {
            if (st.count(n)) {
                return n;
            }
            st.insert(n);
        }
        return INT_MAX;
    }
};
