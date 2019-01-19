// https://helloacm.com/how-to-find-n-repeated-element-in-size-2n-array/ 
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int, int> count;
        for (const auto &n: A) {
            if (count.find(n) == count.end()) {
                count[n] = 1;
            } else {
                count[n] ++;
                if (count[n] == A.size() / 2) {
                    return n;
                }
            }
        }
        return -1;
    }
};