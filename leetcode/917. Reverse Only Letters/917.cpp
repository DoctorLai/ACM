// https://helloacm.com/how-to-reverse-only-letters-in-a-string/
// https://leetcode.com/problems/reverse-only-letters/

class Solution {
public:
    string reverseOnlyLetters(string S) {
        auto len = S.size();
        int i = 0, j = len - 1;
        while (i < j) {
            while ((i < j) && (!isalpha(S[i]))) i ++;
            while ((i < j) && (!isalpha(S[j]))) j --;
            swap(S[i ++], S[j --]);
        }
        return S;
    }
};

