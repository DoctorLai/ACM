// https://helloacm.com/how-to-check-if-two-strings-are-buddy-strings/
// https://leetcode.com/problems/buddy-strings/

class Solution {
public:
    bool buddyStrings(string A, string B) {
        if (A.size() != B.size()) return false;
        if (A.size() <= 1) return false;
        vector<int> idx;
        bool dup = false;
        int count[26] = {0};
        for (int i = 0; i < A.size(); ++ i) {
            if (A[i] != B[i]) {
                idx.push_back(i);
                if (idx.size() > 2) {
                    return false;
                }
            }
            if (++count[A[i] - 97] > 1) dup = true;
        }
        if (idx.size() == 1) return false;
        if (idx.size() == 2) {
            return (A[idx[0]] == B[idx[1]]) && (A[idx[1]] == B[idx[0]]);
        }                        
        return dup;
    }
};
