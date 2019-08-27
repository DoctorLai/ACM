// https://helloacm.com/two-pointer-and-sliding-window-algorithm-to-find-k-length-substrings-with-no-repeated-characters/
// https://leetcode.com/problems/find-k-length-substrings-with-no-repeated-characters/

class Solution {
public:
    int numKLenSubstrNoRepeats(string S, int K) {
        if (S.size() < K) return 0;
        int ans = 0;
        unordered_set<char> data;
        int i = 0;
        for (int j = 0; j < S.size(); ++ j) {
            while (data.count(S[j])) {
                data.erase(S[i ++]);
            }
            data.insert(S[j]);
            if (j - i + 1 >= K) {
                ans ++;
            }
        }
        return ans;
    }
};
