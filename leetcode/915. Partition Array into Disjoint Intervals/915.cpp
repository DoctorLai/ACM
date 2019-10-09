// https://helloacm.com/how-to-partition-array-into-disjoint-intervals/
// https://leetcode.com/problems/partition-array-into-disjoint-intervals/

class Solution {
public:
    int partitionDisjoint(vector<int>& A) {
        vector<int> minRight(A.size(), INT_MAX);
        minRight[A.size() - 1] = A.back();
        for (int i = A.size() - 2; i >= 0; -- i) {
            minRight[i] = min(minRight[i + 1], A[i]);
        }
        int maxLeft = -1;
        for (int i = 0; i + 1 < A.size(); ++ i) {
            maxLeft = max(maxLeft, A[i]);
            if (maxLeft <= minRight[i + 1]) {
                return i + 1;
            }
        }
        return A.size(); 
    }
};
