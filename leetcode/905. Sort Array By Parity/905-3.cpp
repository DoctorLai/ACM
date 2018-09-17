// https://helloacm.com/how-to-sort-array-by-parity/
// https://leetcode.com/problems/sort-array-by-parity/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        auto is_even = [] (auto e) { return e % 2 == 0; };
        partition (A.begin (), A.end (), is_even);
        return A;
    }
};
