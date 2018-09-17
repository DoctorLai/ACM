// https://helloacm.com/how-to-sort-array-by-parity/
// https://leetcode.com/problems/sort-array-by-parity/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        std::sort(A.begin(), A.end(), [](auto &a, auto &b) { 
            return a%2 < b%2;            
        });
        return A;
    }
};
