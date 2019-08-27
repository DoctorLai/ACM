// https://helloacm.com/two-pointer-and-sliding-window-algorithm-to-find-k-length-substrings-with-no-repeated-characters/
// https://leetcode.com/problems/find-k-length-substrings-with-no-repeated-characters/

class Solution {
public:
    int numKLenSubstrNoRepeats(string S, int K) {
        if (S.size() < K) return 0;
        int count[26];
        std::fill(begin(count), end(count), 0);
        for (int i = 0; i < K; ++ i) {
            count[S[i] - 97] ++;
        }
        int ans = check(count) ? 1 : 0;
        for (int i = K; i < S.size(); ++ i) {
            count[S[i - K] - 97] --; // left-most letter
            count[S[i] - 97] ++;     // current letter
            if (check(count)) {
                ans ++;
            }
        }
        return ans;
    }
private:
    bool check(int count[26]) { // O(1)
        for (int i = 0; i < 26; ++ i) {
            if (count[i] > 1) return false;
        }
        return true;
    }
};
