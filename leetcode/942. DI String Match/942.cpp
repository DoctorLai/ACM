// https://helloacm.com/the-di-decreasing-increasing-string-match-algorithm/
// https://leetcode.com/problems/di-string-match/

class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> r(S.size() + 1);
        int lo = 0, hi = S.size();
        for (int i = 0; i < S.size(); ++ i) {
            if (S[i] == 'I') {
                r[i] = lo ++;
            } else {
                r[i] = hi --;
            }
        }
        r[S.size()] = hi;
        return r;
    }
};
