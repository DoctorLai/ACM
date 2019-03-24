// https://helloacm.com/how-to-partition-an-array-into-three-parts-with-equal-sum/
// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int avg = std::accumulate(begin(A), end(A), 0, [](auto &a, auto &b) {return a + b; }) / 3;
        int cur = 0;
        int count = 0;
        for (int i = 0; i < A.size(); ++ i) {
            cur += A[i];
            if (cur == avg) {
                count ++;
                cur = 0;
            }
        }
        return count == 3 && cur == 0;
    }
};
