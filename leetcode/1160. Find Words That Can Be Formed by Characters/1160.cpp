// https://helloacm.com/how-to-find-words-that-can-be-formed-by-characters/
// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        int count[26];
        std::fill(begin(count), end(count), 0);
        for (const auto &n: chars) {
            count[n - 97] ++;
        }
        for (const auto &s: words) {
            int cc[26];
            std::copy(begin(count), end(count), begin(cc));
            if (isGood(s, cc)) {
                ans += s.size();
            }
        }
        return ans;
    }
private:
    bool isGood(const string &s, int count[26]) {
        for (const auto &n: s) {
            if (count[n - 97] == 0) {
                return false;
            }
            count[n - 97] --;
        }
        return true;
    }
};
