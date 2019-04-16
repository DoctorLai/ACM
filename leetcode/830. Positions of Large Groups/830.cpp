// https://helloacm.com/how-to-find-positions-of-large-groups-using-two-pointer-algorithm/
// https://leetcode.com/problems/positions-of-large-groups/

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> res;
        int i = 0, len = S.size();
        while (i < len) {
            int j = i + 1;
            while (j < len && S[j] == S[i]) {
                j ++;
            }
            if (j - i + 1 > 3) {
                res.push_back( {i, j - 1} );
            }
            i = j;
        }
        return res;
    }
};
