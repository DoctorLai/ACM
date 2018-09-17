// https://helloacm.com/how-to-sort-array-by-parity/
// https://leetcode.com/problems/sort-array-by-parity/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> even;
        vector<int> odd;
        for (const auto &n: A) {
            if (n % 2 == 0) {
                even.push_back(n);
            } else {
                odd.push_back(n);
            }
        }
        even.insert(even.end(), odd.begin(), odd.end());
        return even;
    }
};
