// https://helloacm.com/algorithms-to-remove-all-adjacent-duplicates-in-a-string/
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string S) {
        for (int i = 1; i < S.size(); ++ i) {
            if (S[i] == S[i - 1]) {
                return removeDuplicates(S.substr(0, i - 1) + 
                                        S.substr(i + 1));
            }
        }
        return S;
    }
};
