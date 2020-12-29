// https://helloacm.com/algorithm-to-determine-if-string-halves-are-alike-same-number-of-vowels/
// https://leetcode.com/problems/determine-if-string-halves-are-alike/
// EASY, STRING

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size() / 2;
        string a = s.substr(0, n);
        string b = s.substr(n);
        function<int(string &s)> numberOfVowels = [](string &a) {
            unordered_set<char> vs({'a', 'e', 'i', 'o', 'u'});
            int ans = 0;
            for (auto &n: a) {
                ans += vs.count(tolower(n));
            }
            return ans;
        };
        return numberOfVowels(a) == numberOfVowels(b);
    }
};
