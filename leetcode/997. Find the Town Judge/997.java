// https://helloacm.com/how-to-find-the-town-judge-using-graph-algorithm/
// https://leetcode.com/problems/find-the-town-judge/

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> trust_count(N, 0);
        vector<bool> valid(N, true);
        int c = 0, x = -1;
        for (const auto &n: trust) {
            trust_count[n[1] - 1] ++;   
            if (trust_count[n[1] - 1] == N - 1) {
                c ++;
                x = n[1];
                if (c >= 2) return -1;
            }
            valid[n[0] - 1] = false;
        }
        if (c == 0) return N == 1 ? 1 : -1;
        if (valid[x - 1]) return x;
        return -1;
    }
};
