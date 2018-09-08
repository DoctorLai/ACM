// https://helloacm.com/how-to-compute-shortest-distance-to-a-character-in-a-string/
// https://leetcode.com/problems/shortest-distance-to-a-character/

class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> r(S.size(), 0);
        int prev = -S.size();
        for (int i = 0; i < S.size(); ++ i) {
            if (S[i] == C) prev = i;
            r[i] = i - prev;
        }
        prev = INT_MAX;
        for (int i = S.size() - 1; i >= 0; -- i) {
            if (S[i] == C) prev = i;
            r[i] = min(r[i], prev - i);
        }
        return r;
    }
};
