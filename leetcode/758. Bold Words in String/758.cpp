// https://helloacm.com/the-algorithm-to-make-words-bold-in-html/
// https://leetcode.com/problems/bold-words-in-string/

class Solution {
public:
    string boldWords(vector<string>& words, string S) {
        int n = S.size();
        vector<bool> bold(n, false);
        for (const auto &s: words) {
            for (int i = 0; i + s.size() - 1 < n; ++ i) {
                bool ok = true;
                for (int k = 0; k < s.size(); ++ k) {
                    if (s[k] != S[i + k]) { // bold string s not found in the string
                        ok = false;
                        break;
                    }
                }
                if (ok) { // it is bold
                    for (int k = 0; k < s.size(); ++ k) {
                        bold[i + k] = true; // mark the character bold
                    }
                }
            }
        }
        string ans = "";
        for (int i = 0; i < n; ++ i) {
            // bold start boundary
            if (bold[i] && (i == 0 || !bold[i - 1])) ans += "<b>"; 
            ans += S[i];
            // bold end boundary
            if (bold[i] && (i == n - 1 || !bold[i + 1])) ans += "</b>";
        }
        return ans;
    }
};
