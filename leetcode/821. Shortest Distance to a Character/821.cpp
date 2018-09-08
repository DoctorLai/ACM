// https://helloacm.com/how-to-compute-shortest-distance-to-a-character-in-a-string/
// https://leetcode.com/problems/shortest-distance-to-a-character/

class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n = S.size();
        vector<int> r(n, n);
        for (int i = 0; i < n; ++ i) {
            if (S[i] == C) r[i] = 0;
        }
        for (int i = 1; i < n; ++ i) {
            r[i] = min(r[i], r[i - 1] + 1);
        }
        for (int i = n - 2; i >= 0; -- i) {
            r[i] = min(r[i], r[i + 1] + 1);
        }
        return r;
    }
};
