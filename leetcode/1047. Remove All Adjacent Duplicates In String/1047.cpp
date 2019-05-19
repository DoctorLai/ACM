// https://helloacm.com/algorithms-to-remove-all-adjacent-duplicates-in-a-string/
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string S) {
        int slow = 0;
        for (int fast = 0; fast < S.size(); ++ fast) {
            if ((slow == 0) || S[slow - 1] != S[fast]) {
                S[slow ++] = S[fast];
            } else {
                slow --;
            }
        }
        return S.substr(0, slow);
    }
};
